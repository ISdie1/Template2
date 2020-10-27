/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 * 文件名  ： main
 * 作者    ： youkaiyan
 * 版本    ： V1.0.0
 * 时间    ： 2020/10/20
 * 简要    ：   
 ********************************************************************
 * 副本
 *
 *>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
/* 头文件 ----------------------------------------------------------------*/
#include<iocc2530.h>
#include'led.h'
#include'key.h'
unsigened int temp=0;

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* 函数名：mian
* 参数：void
* 返回：int
* 作者：youkaiyan
* 时间：2020/10/20
* 描述：主函数入口
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int main (void)

{
  //led初始化
  LedInit();
  KeyInit();
  Ledoff(LED_ALL_E);
  while(1)
  {
    if(KEY_PRESS == KeyStateGet(KEY_KEY1_E))
       {
         //消除抖动
         DelayMs(100);
        if(KEY_PRESS == KeyStateGet(KEY_KEY1_E))
           {
              LedOn(LED_LED1_E);   //等待按键松开
              
              while{KEY_PRESS == KeyStateGet(KEY_KEY1_E));
   }
}
  }
 if(KEY_PRESS == KeyStateGet(KEY_KEY1_E))
       {
         //消除抖动
         DelayMs(100);
        if(KEY_PRESS == KeyStateGet(KEY_KEY2_E))
           {
              LedOn(LED_LED2_E);   //等待按键松开
              
              while{KEY_PRESS == KeyStateGet(KEY_KEY2_E));
              }
           }
       }
              