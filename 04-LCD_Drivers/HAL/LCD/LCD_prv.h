/*
 * LCD_prv.h
 *
 *  Created on: Jul 22, 2022
 *      Author: DELL
 */

#ifndef HAL_LCD_LCD_PRV_H_
#define HAL_LCD_LCD_PRV_H_

/*TO CLEAR SCREEN=
 * 0b00001100

 */
#define LCD_CLEAR_SCREEN 0b00000001
#define LCD_SET_DDRAM_ADDRESS  0x80 // 0b10000000 cursor location

#endif /* HAL_LCD_LCD_PRV_H_ */
