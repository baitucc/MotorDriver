#ifndef __BRUSHMOTOR_H_
#define __BRUSHMOTOR_H_

#include "bsp.h"


void brushmotor_init(void);
void brushmotor_forward_run(void);
void brushmotor_reverse_run(void);
void brushmotor_stop(void);
void brushmotor_set_speed(unsigned short val);

#endif
