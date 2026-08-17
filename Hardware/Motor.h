#ifndef __MOTOR_H
#define __MOTOR_H

#include "stm32f10x.h"                  

void Motor_Init(void);
void Left_Speed(int8_t Speed);
void Right_Speed(int8_t Speed);
	
#endif
