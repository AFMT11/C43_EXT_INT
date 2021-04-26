/*
 * C43_EXT_INT.c
 *
 * Created: 4/21/2021 11:40:35 PM
 * Author : ahmed
 */ 

#include "EXT_INT.h"
#include "LED.h"
#include <avr/interrupt.h>


int main(void)
{
	LED_INT();
	EXT_INT0_INT();
	EXT_INT1_INT();
	EXT_INT2_INT();
    /* Replace with your application code */
    while (1) 
    {
    }
}

ISR(INT0_vect)
{
	LED0_TOGGLE();
}
ISR(INT1_vect)
{
	LED1_TOGGLE();
}
ISR(INT2_vect)
{
	LED2_TOGGLE();
}

