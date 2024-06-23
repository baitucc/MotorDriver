#include "bsp.h"
#include "brushmotor.h"


#if (__ARMCC_VERSION >= 6010050 )   // use AC6 complier
__asm(".global __use_no_semihosting\n\t"); //声明不使用半主机模式
__asm(".global __ARM_use_no_argv\n\t"); //AC6下需要声明main为无参函数

#else //使用AC5,定义__FILE和不使用半主机模式
  #pragma import(__use_no_semihosting)
    struct __FILE
    {
      int handle;
    };

#endif
 
 //不使用半主机模式，需要重定义_ttywrch\_sys_exit\_sys_command_string函数，
 //来同时兼容AC5,AC6   
    int _ttywrch(int ch)
    {
      ch = ch;
      return ch;
    }

    void _sys_exit(int x)
    {
      x = x;
    }

    char *_sys_command_string(char *cmd,int len)
    {
      return NULL;
    } 

    FILE __stdout;

int fputc(int ch,FILE *f)
{
	__HAL_UART_CLEAR_FLAG(&huart1,UART_FLAG_TC);
	HAL_UART_Transmit(&huart1,(uint8_t *)&ch,1,0xffff);
	while(__HAL_UART_GET_FLAG(&huart1,UART_FLAG_TC) == RESET);
	return ch;
}


