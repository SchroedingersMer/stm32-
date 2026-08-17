#include "stm32f10x.h"
#include "Car.h"

void Infrared_Init(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode =GPIO_Mode_IN_FLOATING ;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8 | GPIO_Pin_7| GPIO_Pin_6| GPIO_Pin_5;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOB, &GPIO_InitStructure);
}

void Track(void)
{
	if(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_8)==0&&
	GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_7)==1&&
	GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_6)==1&&
	GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_5)==0)
	{Move_on();}
	else if(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_8)==1&&
	GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_7)==1&&
	GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_6)==1&&
	GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_5)==1)
	{Stop();}
	else if(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_8)==0&&
	GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_7)==1&&
	GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_6)==1&&
	GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_5)==1)
	{Turn_right();}
	else if(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_8)==0&&
	GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_6)==0&&
	GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_7)==1&&
	GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_15)==0)
	{Go_right();}
	else if(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_8)==1&&
	GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_7)==1&&
	GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_6)==1&&
	GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_5)==0)
	{Turn_left();}
	else if(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_8)==0&&
	GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_7)==1&&
	GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_6)==0&&
	GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_5)==0)
	{Go_left();}
}
