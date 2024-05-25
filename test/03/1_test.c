// 通过实验（即编写带有此类问题的程序）观察系统如何处理整数上溢，浮点数上溢和浮点数下溢的情况

#include <stdio.h>
void int_overflow(void);
void float_overflow(void);
void float_underflow(void);
int main(void)
{
    int_overflow();
    float_overflow();
    float_underflow();
    getchar();
    return 0;
}

void int_overflow(void)
{
    unsigned short us_a = 65535;
    unsigned short us_d;
    us_d = us_a + 1;
    short s_b;
    int i_c=899654;
    s_b = i_c;
    printf("sizeof short is %d\n", sizeof(short));
    printf("us_a add 1 is %d\n", us_d); // 超出数据范围增长溢出
    printf("s_b is %d\n", s_b); // 超出数据范围读取溢出
    printf("i_c is %d\n", i_c);
}

void float_overflow(void)
{
    float f_a = 2.0e8;
    float f_b;
    f_b = f_a + 1 - f_a;
    printf("f_b is %f\n", f_b); // 浮点数上溢
}

void float_underflow(void)
{
    float f_c = 3.14159e-1;
    float f_d;
    f_d = f_c / 100;
    printf("f_d is %f\n", f_d); // 浮点数下溢
}