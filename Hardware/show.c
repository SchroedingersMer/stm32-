#include "stm32f10x.h"                  
#include "OLED.h"
#include "Ultrasound.h"
#include "Serial.h"

uint8_t sec;
uint8_t min;
uint8_t base = 90;

void Show_string(void)
{
	OLED_ShowString(1,1,"time:");
	OLED_ShowString(1,8 ,"min");
	OLED_ShowString(1,13,"sec");
	OLED_ShowString(2,1,"distance:");
	OLED_ShowString(2,13,"cm");
	OLED_ShowString(3,1,"angle:");
	OLED_ShowString(4,1,"recieve:");
}

void Show_info(void)
{
	OLED_ShowNum(1, 6,min, 2);
	OLED_ShowNum(1, 11,sec, 2);
	OLED_ShowNum(2, 10, Get_distance(), 3);
	OLED_ShowSignedNum(3, 7, angle-base, 3);
}
