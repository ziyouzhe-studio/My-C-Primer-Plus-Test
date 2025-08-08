/*
编写一个程序，打印一定范围内的整型数据。
可以使用循环方式打印指定范围的数据，程序首先通过scanf()函数读取用户输入，
循环指定打印从输入数据开始的10个整数
*/
#include <stdio.h>
int main(int argc, char* argv[])
{
    int counter, i = 0;
    printf("PRINT COUNTINUE 10 NUMBERS!\n");
    printf("PLEASE INPUT THE START NUMBER: ");
    scanf_s("%d", &counter);
    // 读取用户输入，保存至counter
    while (i++) {
        printf("%d\n", counter++);
    }
    printf("PROGRAM EXIT!\n");
    return 0;
}
