/*
 * EXT_INT.c
 *
 * Created: 4/21/2021 11:41:07 PM
 *  Author: ahmed
 */ 

#include "EXT_INT.h"

void SetGlobal_INT(void)
{
	#if GLOBAL_INTERRUPT == GLOBAL_INTERRUPT_ENABLE
	Set_Bit(SREG,7);
	#elif GLOBAL_INTERRUPT == GLOBAL_INTERRUPT_DISABLE
	clear_Bit(SREG7);

#endif
}

void EXT_INT0_INT(void)
{
	/*enable global INT*/
	SetGlobal_INT();
	
	/*enable EXT INT0*/
	Set_Bit(GICR,6);
	
	/*Select Trigger*/
	#if EXT_INT0_TRIGGER == TRIGGER_RISING
	Set_Bit(MCUCR,0);
	Set_Bit(MCUCR,1);
	#elif EXT_INT0_TRIGGER == TRIGGER_FALLING
	clear_Bit(MCUCR,0);
	Set_Bit(MCUCR,1);
	#elif EXT_INT0_TRIGGER == TRIGGER_ANY_LOGICAL_CHANGE
	Set_Bit(MCUCR,0);
	clear_Bit(MCUCR,1);
	#elif EXT_INT0_TRIGGER == TRIGGER_LOW_LEVEL
	clear_Bit(MCUCR,0);
	clear_Bit(MCUCR,1);
	#endif	
	
}
void EXT_INT1_INT(void)
{
	/*enable global INT*/
	SetGlobal_INT();
	
	/*enable EXT INT0*/
	Set_Bit(GICR,7);
	
	/*Select Trigger*/
	#if EXT_INT0_TRIGGER == TRIGGER_RISING
	Set_Bit(MCUCR,2);
	Set_Bit(MCUCR,3);
	#elif EXT_INT0_TRIGGER == TRIGGER_FALLING
	clear_Bit(MCUCR,2);
	Set_Bit(MCUCR,3);
	#elif EXT_INT0_TRIGGER == TRIGGER_ANY_LOGICAL_CHANGE
	Set_Bit(MCUCR,2);
	clear_Bit(MCUCR,3);
	#elif EXT_INT0_TRIGGER == TRIGGER_LOW_LEVEL
	clear_Bit(MCUCR,2);
	clear_Bit(MCUCR,3);
	#endif
}
void EXT_INT2_INT(void)
{
	/*enable global INT*/
	SetGlobal_INT();
	
	/*enable EXT INT0*/
	Set_Bit(GICR,5);
	
	/*Select Trigger*/
	#if EXT_INT0_TRIGGER == TRIGGER_RISING
	Set_Bit(MCUCSR,6);
	#elif EXT_INT0_TRIGGER == TRIGGER_FALLING
	clear_Bit(MCUCSR,6);
	#endif	
}