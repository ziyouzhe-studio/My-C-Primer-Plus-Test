// escape.c -- 使用转移序列
#include <stdio.h>
int main(void)
{
    float salary;
    printf("\aEnter your desired monthly salary: "); // 1
    printf("$______\b\b\b\b\b\b\b"); // 2
    scanf("%f", &salary);
    printf("\n\t$%.2f a month is  $%.2f a year.", salary, salary * 12.0);
    printf("\rGee!\n");
    return 0;
}