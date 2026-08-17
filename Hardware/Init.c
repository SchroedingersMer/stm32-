#include "stm32f10x.h"                 
#include "OLED.h"
#include "Car.h"
#include "Serial.h"
#include "Ultrasound.h"
#include "Track.h"
#include "Time.h"
#include "Show.h"

void Init(void)
{
	angle = 90;
	OLED_Init();
	Car_init();
	Serial_Init();
	Ultrasound_Init();
	Infrared_Init();
	Time_Init();
	Show_string();
}
