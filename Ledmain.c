#include "Led.h"
#include "stm32f10x.h" // Device header
int main(void)
{

 // ���� GPIOB �˿�ʱ��
               
  RCC_APB2RSTR |= (1<<3);
 
 //��տ��� PB0 �Ķ˿�λ
 GPIOB_CRL &= ~( 0x0F<< (4*0));
 // ���� PB0 Ϊͨ������������ٶ�Ϊ 10M
 GPIOB_CRL |= (1<<4*0);
 
 // PB0 ��� �͵�ƽ
 GPIOB_ODR |= (0<<0);
	while (1);

}