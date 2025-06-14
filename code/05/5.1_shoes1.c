/*
程序清单5.1是一个简单的程序示例，该程序进行了简单的运算，计算
穿9码男鞋的脚长（单位：英寸）。
*/

// shoes1.c -- 把鞋码转换成英寸

#include <stdio.h>
#define ADJUST 7.31 // 字符常量
int main()
{
    const double SCALE = 0.333; // const变量
    double shoe, foot;
    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;
    printf("Shoe size (men's) foot length\n");
    printf("%10.1f %15.2f inches \n", shoe, foot);
    return 0;
}