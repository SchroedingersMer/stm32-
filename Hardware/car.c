#include "stm32f10x.h"                 
#include "Motor.h"
#include "Delay.h"
#include "Servo.h"

void Car_init(void)
{
	Servo_Init();
	Motor_Init();
}

void Stop(void)
{
	Left_Speed(0);
	Right_Speed(0);
}

void Move_on(void)
{ 
	Stop();
	Delay_ms(5);
	Left_Speed(100);
	Right_Speed(100);
}

void Go_left(void)
{
	Stop();
	Delay_ms(5);
	Left_Speed(50);
	Right_Speed(100);
}

void Go_right(void)
{
	Stop();
	Delay_ms(5);
	Left_Speed(100);
	Right_Speed(50);
}

void Turn_left(void)
{
	Stop();
	Delay_ms(5);
	Left_Speed(-100);
	Right_Speed(100);
}

void Turn_right(void)
{
	Stop();
	Delay_ms(5);
	Left_Speed(100);
	Right_Speed(-100);
}

void Move_back(void)
{
	Stop();
	Delay_ms(5);
	Left_Speed(-100);
	Right_Speed(-100);
}
