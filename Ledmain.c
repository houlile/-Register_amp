#include "Led.h"
#include "stm32f10x.h" // Device header
int main(void)
{

 // 开启 GPIOB 端口时钟
               
  RCC_APB2RSTR |= (1<<3);
 
 //清空控制 PB0 的端口位
 GPIOB_CRL &= ~( 0x0F<< (4*0));
 // 配置 PB0 为通用推挽输出，速度为 10M
 GPIOB_CRL |= (1<<4*0);
 
 // PB0 输出 低电平
 GPIOB_ODR |= (0<<0);
	while (1);

}