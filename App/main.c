/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 * �ļ���  �� main
 * ����    �� youkaiyan
 * �汾    �� V1.0.0
 * ʱ��    �� 2020/10/20
 * ��Ҫ    ��   
 ********************************************************************
 * ����
 *
 *>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
/* ͷ�ļ� ----------------------------------------------------------------*/
#include<iocc2530.h>
#include'led.h'
#include'key.h'
unsigened int temp=0;

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* ��������mian
* ������void
* ���أ�int
* ���ߣ�youkaiyan
* ʱ�䣺2020/10/20
* ���������������
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int main (void)

{
  //led��ʼ��
  LedInit();
  KeyInit();
  Ledoff(LED_ALL_E);
  while(1)
  {
    if(KEY_PRESS == KeyStateGet(KEY_KEY1_E))
       {
         //��������
         DelayMs(100);
        if(KEY_PRESS == KeyStateGet(KEY_KEY1_E))
           {
              LedOn(LED_LED1_E);   //�ȴ������ɿ�
              
              while{KEY_PRESS == KeyStateGet(KEY_KEY1_E));
   }
}
  }
 if(KEY_PRESS == KeyStateGet(KEY_KEY1_E))
       {
         //��������
         DelayMs(100);
        if(KEY_PRESS == KeyStateGet(KEY_KEY2_E))
           {
              LedOn(LED_LED2_E);   //�ȴ������ɿ�
              
              while{KEY_PRESS == KeyStateGet(KEY_KEY2_E));
              }
           }
       }
              