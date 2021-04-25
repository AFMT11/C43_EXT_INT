/*
 * LED.c
 *
 * Created: 4/12/2021 8:49:51 PM
 *  Author: ahmed
 */ 
#include "LED.h"
void LED_INT(void)
{
DIO_SetPinDir(DIO_PORTC, DIO_PIN2, DIO_PIN_OUTPUT);
DIO_SetPinDir(DIO_PORTC, DIO_PIN7, DIO_PIN_OUTPUT);
DIO_SetPinDir(DIO_PORTD, DIO_PIN3, DIO_PIN_OUTPUT);
}
void LED0_ON(void)
{
	DIO_SetPinValue(DIO_PORTD, DIO_PIN3, DIO_PIN_ON);		
}
void LED1_ON(void)
{
	DIO_SetPinValue(DIO_PORTC, DIO_PIN7, DIO_PIN_ON);
}
void LED2_ON(void)
{
	DIO_SetPinValue(DIO_PORTC, DIO_PIN2, DIO_PIN_ON);
}
void LED0_TOGGLE(void)
{
	DIO_TogglePin(DIO_PORTD, DIO_PIN3);
}
void LED1_TOGGLE(void)
{
	DIO_TogglePin(DIO_PORTC, DIO_PIN7);
}
void LED2_TOGGLE(void)
{
	DIO_TogglePin(DIO_PORTC, DIO_PIN2);
}
void LED0_OFF(void)
{
	DIO_SetPinValue(DIO_PORTD, DIO_PIN3, DIO_PIN_OFF);
}
void LED1_OFF(void)
{
	DIO_SetPinValue(DIO_PORTC, DIO_PIN7, DIO_PIN_OFF);
}
void LED2_OFF(void)
{
	DIO_SetPinValue(DIO_PORTC, DIO_PIN2, DIO_PIN_OFF);
}
