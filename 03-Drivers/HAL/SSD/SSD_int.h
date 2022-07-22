/*
 * SSD_int.h
 *
 *  Created on: Jul 20, 2022
 *      Author: DELL
 */

#ifndef HAL_SSD_SSD_INT_H_
#define HAL_SSD_SSD_INT_H_

#define COM_CATHOD  0
#define COM_ANOOD   1

#define  SSD_TYPE   COM_CATHODE


#define SSD_PORT  DIO_PORTC







/* the function */
void HSSD_vInit(void);
void HSSD_vDisPlayNum(u8 A_u8Num);
void HSSD_vTurnOff(void);



#endif /* HAL_SSD_SSD_INT_H_ */
