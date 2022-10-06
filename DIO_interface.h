/****************************************************************************************************************************/
/***************** Author : Diea Abdeltwab **********************************************************************************/
/***************** File : Interface of DIO  *********************************************************************************/
/***************** Date : 3/9/2022  *****************************************************************************************/
/***************** Version : 1.0  *******************************************************************************************/
/***************** Description : Drive For DIO ******************************************************************************/
/****************************************************************************************************************************/

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

void DIO_VidSetPinDirection(u8 Copy_U8Port , u8 Copy_U8Pin ,u8 Copy_U8Dir);
void DIO_VidSetPinValue(u8 Copy_U8Port , u8 Copy_U8Pin ,u8 Copy_U8Dir);
u8 DIO_VidGetPinValue(u8 Copy_U8Port , u8 Copy_U8Pin);
void DIO_VidTogglePinValue(u8 Copy_U8Port , u8 Copy_U8Pin);
void DIO_VidSetPortDirection(u8 Copy_U8Port , u8 Copy_U8Dir);
void DIO_VidSetPortValue(u8 Copy_U8Port , u8 Copy_U8Dir);

#endif
