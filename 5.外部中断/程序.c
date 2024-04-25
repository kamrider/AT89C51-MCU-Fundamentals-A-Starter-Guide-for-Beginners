#include <reg51.h>

/* 有两个LED连接到P2^0，P2^1 */
sbit led1 = P2^0;
sbit led2 = P2^1;

/* 外部中断0和中断1初始化函数 */
void ext_int_init() {
    IT0 = 1;  // 设置INT0为边沿触发，1为下降沿触发
    IT1 = 1;  // 设置INT1为边沿触发，1为下降沿触发

    EX0 = 1;  // 使能外部中断0
    EX1 = 1;  // 使能外部中断1

    EA = 1;   // 使能全局中断
}

/* 外部中断0服务例程 */
void ext0_ISR() interrupt 0 {
    led1 = ~led1;  // 切换LED1状态
}

/* 外部中断1服务例程 */
void ext1_ISR() interrupt 2 {
    led2 = ~led2;  // 切换LED2状态
}

void main() {
    led1 = 0;  // 初始化LED1状态为关闭
    led2 = 0;  // 初始化LED2状态为关闭
    ext_int_init(); // 初始化外部中断0和中断1

    while(1) {
        // 主循环，什么也不做，只等待中断发生
    }
}
