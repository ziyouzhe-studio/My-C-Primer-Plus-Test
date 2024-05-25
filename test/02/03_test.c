// 编写一个程序把你的年龄转换为天数， 并显示这两个值。不用考虑闰年
#include <stdio.h>
int main(void)
{
    int years, days, day;
    years = 23;
    days = 365;

    day = years * days;
    printf("your age is %d \n", day);
    return 0;
}