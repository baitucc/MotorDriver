#include "brushmotor.h"

void brushmotor_init(void)
{
	GPIO_InitTypeDef GPIO_InitStruct = {0};

	__HAL_RCC_GPIOD_CLK_ENABLE();
	
	//PD0 -- BDC_SD1,	PD1 -- BDC_SD2
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pin = GPIO_PIN_0|GPIO_PIN_1;
	GPIO_InitStruct.Speed= GPIO_SPEED_FREQ_HIGH;
	HAL_GPIO_Init(GPIOD,&GPIO_InitStruct);
	
	HAL_GPIO_WritePin(GPIOD,GPIO_PIN_0,GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD,GPIO_PIN_1,GPIO_PIN_SET);
	// H1,L1---- PD12 	H2,L2-----PD13
	//		H1				H2
	//				M
	//		L1				L2
	//L2 ON ,H1,L1由pwm控制，驱动方式为单极模式
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pin = GPIO_PIN_13;
	GPIO_InitStruct.Speed= GPIO_SPEED_FREQ_HIGH;
	HAL_GPIO_Init(GPIOD,&GPIO_InitStruct);	
	HAL_GPIO_WritePin(GPIOD,GPIO_PIN_13,GPIO_PIN_RESET);
}

void brushmotor_set_speed(unsigned short val)
{
	__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_1,val);
}

void brushmotor_forward_run(void)
{
	//硬性转动
	/**
	 * 	// HAL_GPIO_WritePin(GPIOD,GPIO_PIN_0,GPIO_PIN_SET);
	// HAL_GPIO_WritePin(GPIOD,GPIO_PIN_1,GPIO_PIN_SET);
	// HAL_GPIO_WritePin(GPIOD,GPIO_PIN_12,GPIO_PIN_SET);
	// HAL_GPIO_WritePin(GPIOD,GPIO_PIN_13,GPIO_PIN_RESET);
	 * 
	 */

	/**PWM控制 */
	
}

void brushmotor_reverse_run(void)
{
	HAL_GPIO_WritePin(GPIOD,GPIO_PIN_0,GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD,GPIO_PIN_1,GPIO_PIN_SET);
	
	HAL_GPIO_WritePin(GPIOD,GPIO_PIN_13,GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD,GPIO_PIN_12,GPIO_PIN_RESET);
}

void brushmotor_stop(void)
{
	HAL_GPIO_WritePin(GPIOD,GPIO_PIN_0,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOD,GPIO_PIN_1,GPIO_PIN_RESET);

	HAL_TIM_PWM_Stop(&htim4,TIM_CHANNEL_1);
}