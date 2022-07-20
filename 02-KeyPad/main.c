/*
 * main.c

 *
 *  Created on: Jul 20, 2022
 *      Author: Bahgat Mahmoud
 */
#include "std_types.h"


#include <avr/io.h>

#include <util/delay.h>

#include "common_macros.h"
void KEYPAD_Init (void)
{
	/* PORTB -> inputs/outputs (c1 & c2 & c3 & c4) are output from B0 to B3  and from B4 to B7 are input  */
	DDRB = 0x0f;
	/* PULL UP RESISTORS ACTIVATION ON INPUTS B4 to B7 pull up*/
	PORTB = 0xff;
}

u8 GetPressdKey(void)
{
   u8 Pressed_Key = 0; // if the return = 0 this is mean not pressed key

   for(u8 col=0;col<4;col++)
   {
	   /*activate current column*/
	   CLR_BIT(PORTB, col);
	   for(u8 row=0;row<4;row++)
	   {
		   if(GET_BIT(PINB,row+4) == 0)
		   {
			   Pressed_Key = (row+(col*4)+1);/* key number */ //4 number of rows
		   }
		   /*for debouncing*/
		   while (GET_BIT(PINB,row+4) == 0);
		   _delay_ms(30);
	   }
	   /*deactivate column*/
	   SET_BIT(PORTB, col);
   }

   return Pressed_Key;
}


int main (void)
{
	 KEYPAD_Init();
	 u8 Key = 0 ;
	while (1)
	{
		Key = GetPressdKey();
		if(Key != 0)
		{
			/*seven segment display code here */

		}


	}
	return 0;
}
