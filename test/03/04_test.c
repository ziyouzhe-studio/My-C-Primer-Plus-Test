/**
编写一个程序，读取一个浮点数，先打成小数点形式，在打印成指数形式。
然后，如果系统支持，在打印成p记数法（即十六进制计数法）。
按一下格式输出（实际显示的指数位数因系统而异）：
Enter a floating-point value: 64.25
fixed-point notation:64.250000
exponential 6.425000e+01
p notation: 0x1.0p + 6
 * */

#include <stdio.h>
int main()
{
    float i;
    printf("Enter a floating-point value: ");
    scanf("%f", &i);
    printf("fixed-point notation: %f\n", i); // 小数点形式
    printf("exponential notation:%e\n", i); // 指数形式
    printf("p notation:%a\n", i); // p计数法
    return 0;
}

