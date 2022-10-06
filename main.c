#define F_CPU 8000000UL
#include <util/delay.h>
#include "Bit_math.h"
#include "STD_TYPES.h"
#include "DIO_interface.h"

#define  DELAY_CalculationTime  696
#define  DELAY_ContextSwitch    1710
#define  DELAY_LoopTime         137
void Delay_voidDelay_ms(u32 Copy_u32Time_ms)
{
	
	Copy_u32Time_ms = (Copy_u32Time_ms * 100000)-(LDELAY_CalculationTime + LDELAY_ContextSwitch);
	u32 Local_u32NoLoops = Copy_u32Time_ms/LDELAY_LoopTime;
	for(u32 i=0;i<Local_u32NoLoops;i++)
	{
		asm("NOP");
	}
	
}

void Delay_voidDelay_us(u32 Copy_u32Time_us)
{
	Copy_u32Time_us = (Copy_u32Time_us * 100) - LDELAY_CalculationTime - LDELAY_ContextSwitch;
	u32 Local_u32NoLoops = Copy_u32Time_us / LDELAY_LoopTime;
	for(u32 i=0;i<Local_u32NoLoops;i++)
	{
		asm("NOP");
	}
}
void main(void)
{
	DIO_VidSetPinDirection(3,255);
}


while(1)
{
	DIO_VidSetPinValue(3,0,1);
	Delay_voidDelay_ms(1000);
	DIO_VidSetPinValue(3,0,0);
	Delay_voidDelay_ms(1000);
}

}

