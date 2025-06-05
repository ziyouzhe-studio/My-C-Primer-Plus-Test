/*
scanf()中*的用法与此不同。把*放在%和转换字符之间时，
会使得scanf()跳过相应的输出项。
*/

// skiptwo.c -- 跳过输入中的前两个整数

#include <stdio.h>
int main(void)
{
    int n;
    printf("Please enter three integers: \n");
    scanf("*%d*%d%d", &n);
    printf("The last integer was %d \n", n);
    return 0;
}