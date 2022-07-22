/*
 * main.c
 *
 *  Created on: Jul 20, 2022
 *      Author: DELL
 */
#include "../LIB/STD_TYPES.h"
#include "../HAL/LCD/LCD_interface.h"
#include  <util/delay.h>
int main(void)
{

	HLCD_vInit();


	while(1)
	{

		/*Check the LCD driver  */

		HLCD_vSendChar('B');
		HLCD_vSendChar('a');
		HLCD_vSendChar('h');
		HLCD_vSendChar('g');
		HLCD_vSendChar('a');
		HLCD_vSendChar('t');
		HLCD_vPrintString(" Mahmoud");
		_delay_ms(1000);
		HLCD_vClearCommand();
		HLCD_vPrintNumber(0);
		HLCD_vPrintNumber(127503);
		HLCD_vPrintNumber(8216);
		_delay_ms(1000);
		HLCD_vClearCommand();
		HLCD_vSetCursorPostion(LCD_LINE0,1);
		HLCD_vSendChar('B');
		_delay_ms(500);
		HLCD_vClearCommand();
		HLCD_vSetCursorPostion(LCD_LINE0,2);
		HLCD_vSendChar('B');
		_delay_ms(500);
		HLCD_vClearCommand();

		/*to print lattene you must send addrss*/
		HLCD_vSendChar(0b11110011);
		_delay_ms(500);
		HLCD_vClearCommand();
	}
	return 0;
}
