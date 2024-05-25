// 一年大约有3.156*107秒。编写一个程序，提示用户输入年龄，然后显示该年龄对应的秒数

#include <stdio.h>
int main(void)
{
    double seconds = 3.156e7;
    unsigned age;
    printf("年龄:");
    scanf("%d", &age);
    printf("秒数是:%f\n", age * seconds);
    return 0;
}