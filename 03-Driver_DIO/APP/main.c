/*
 * main.c
 *
 *  Created on: Jul 20, 2022
 *      Author: DELL
 */
#include "../LIB/std_types.h"
#include <util/delay.h>
#include "../MCAL/DIO/DIO_int.h"
#include "../HAL/SSD/SSD_int.h"
#include <avr/io.h>
int main(void)
{
	//MDIO_vSetPinDir(DIO_PORTC,DIO_PIN0,DIO_OUTPUT);
	//MDIO_vSetPinVal(DIO_PORTC,DIO_PIN0,DIO_HIGH);
	DDRC =0X01;
	PORTC=0X01;

	HSSD_vInit();

	while(1)
	{
		for(int i=0 ; i<10 ;i++)
		{
			HSSD_vDisPlayNum(i);
			_delay_ms(500);
		}

	}
	return 0;
}
