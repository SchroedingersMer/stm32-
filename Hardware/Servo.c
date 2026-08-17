#include "stm32f10x.h"                 
#include "PWM.h"

void Servo_Init(void)
{
	PWM_Servo_Init();									
}

void Servo_SetAngle(float Angle)
{
	PWM_Servo_SetCompare3(Angle * 100 / 9 + 500);	
}
