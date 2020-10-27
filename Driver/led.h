/***********************************************************************************************************
* �ļ���  :led
* ����    �� youkaiyan
* �汾    �� 
* ʱ��    �� 2020/10/20
* ��Ҫ    �� ledͷ�ļ�
********************************************************************
* ����
*
*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
#ifndef_LED_H
#define_LED_H
#include'led.h'
#include'key.h'
#define KEY_PRESS   0
#define KEY_RELEASE  1
#define KEY_ERROR  255
typedef enum enledNum
{
   LED_ALL_E,
   LED_LED1_E
   LED_LED2_E,
   LED_LED3_E,
   LED_Max
}LED_NUM_E;
 
void LedInit(void);
void LedOn(unsigned char ucLedNum);
void Ledoff(unsigned char ucLedNum);
void LedToggle(unsigned char ucLedNum);
void delay(unsigned int s);

