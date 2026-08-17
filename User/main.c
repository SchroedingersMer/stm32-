#include "stm32f10x.h"                 
#include "Serial.h"
#include "Servo.h"
#include "OLED.h"
#include "Track.h"
#include "Time.h"
#include "Show.h"
#include "Init.h"

int main(void)
{
	Init();
	while (1)
	{	
		Serial_control();
		if(temp == 1){Show_info();temp = 0;}
		OLED_ShowHexNum(4, 9, Data, 2);
	 	if(mode==1)Track();
		Servo_SetAngle(angle);
	}
}
