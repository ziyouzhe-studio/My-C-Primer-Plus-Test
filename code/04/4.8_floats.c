// floats.c -- 一些浮点型修饰符的组合
#include <stdio.h>
int main(void)
{
    const double RENT = 3852.99; // const变量
    printf("%f*\n", RENT);
    printf("*%e*\n", RENT);
    printf("*%4.2f*\n", RENT); // 4.2f表示总宽度为4，精度为2
    printf("*%3.1f*\n", RENT); // 3.1f表示总宽度为3，精度为1
    printf("*%10.3f*\n", RENT); // 10.3f表示总宽度为10，精度为3
    printf("*%10.3E*\n", RENT); // 10.3E表示总宽度为10，精度为3
    printf("*%+4.2f*\n", RENT); // +4.2f表示总宽度为4，精度为2，带符号
    printf("*%010.2f*\n", RENT); // 010.2f表示总宽度为10，精度为2，前面补0
    return 0;
}