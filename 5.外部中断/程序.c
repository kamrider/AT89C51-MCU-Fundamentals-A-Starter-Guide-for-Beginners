#include <reg51.h>

/* ������LED���ӵ�P2^0��P2^1 */
sbit led1 = P2^0;
sbit led2 = P2^1;

/* �ⲿ�ж�0���ж�1��ʼ������ */
void ext_int_init() {
    IT0 = 1;  // ����INT0Ϊ���ش�����1Ϊ�½��ش���
    IT1 = 1;  // ����INT1Ϊ���ش�����1Ϊ�½��ش���

    EX0 = 1;  // ʹ���ⲿ�ж�0
    EX1 = 1;  // ʹ���ⲿ�ж�1

    EA = 1;   // ʹ��ȫ���ж�
}

/* �ⲿ�ж�0�������� */
void ext0_ISR() interrupt 0 {
    led1 = ~led1;  // �л�LED1״̬
}

/* �ⲿ�ж�1�������� */
void ext1_ISR() interrupt 2 {
    led2 = ~led2;  // �л�LED2״̬
}

void main() {
    led1 = 0;  // ��ʼ��LED1״̬Ϊ�ر�
    led2 = 0;  // ��ʼ��LED2״̬Ϊ�ر�
    ext_int_init(); // ��ʼ���ⲿ�ж�0���ж�1

    while(1) {
        // ��ѭ����ʲôҲ������ֻ�ȴ��жϷ���
    }
}
