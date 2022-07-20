/*
 * KEYPAD_int.h
 *
 *  Created on: Jul 20, 2022
 *      Author: DELL
 */

#ifndef HAL_KEYPAD_KEYPAD_INT_H_
#define HAL_KEYPAD_KEYPAD_INT_H_

#define KPD_PORT  DIO_PORTA

void HKPD_Init (void);
u8 HKPD_GetPressdKey(void);

#endif /* HAL_KEYPAD_KEYPAD_INT_H_ */
