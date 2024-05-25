// floats.c -- 一些浮点型修饰符的组合
#include <stdio.h>
int main(void)
{
    const double RENT = 3852.99; // const变量
    printf("%f*\n", RENT);
    printf("*%e*\n", RENT);
}