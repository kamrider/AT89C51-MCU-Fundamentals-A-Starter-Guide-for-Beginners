#include "REG51.h"


// ��ť�淨
// void main(void){
//	unsigned char i;

//	 while(1){
//		i = P3;
//		P2 = i;
//		 //�����Ҫ��ťON��ʱ�������ȡ������
////		 P2 = ~i;
//	 }
//		 
// }
void Delay10ms()//@12.000MHz
{
unsigned char i, j;
	i =20;
	j= 113;
do{while(--j);
	
	}while(--i);
}


 sbit Key_1 = P1^6;
 sbit Key_2 = P1^7;
 sbit LED = P1^0; 
  

void main(void){


	 while(1){

		if(Key_2 == 0)
		{
			Delay10ms();
			if(Key_2 == 0)
			{
				LED = 0;
			}
		}
		if(Key_2 == 1)
		{
			Delay10ms();
			if(Key_2 == 1)
			{
				LED = 1;
			}
		}
	 }
		 
 }