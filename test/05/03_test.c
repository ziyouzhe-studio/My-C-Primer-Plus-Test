/*
编写一个程序，提示用户输入天数，然后将其转换为周数和天数。
例如输入18，则转换为2周4天。
*/

#include <stdio.h>
#define DAY_PER_WEK 7 // 每周七天
int main(int argc, char* argv[])
{
    int weeks, days, input;
    printf("CONVERT DAYS TO WEEKS!\n");
    printf("PLEASE INPUT THE NUMBER OF DAYS(<=0 TO QUIT:)");
    scanf_s("%d", &input);
    while (input > 0)
    {
        /* code */
        weeks = input / DAY_PER_WEK;
        days = input % DAY_PER_WEK;
        printf("CONVERT TO %d WEEKS AND %d DAYS\n", weeks, days);
        printf("PLEASE CONTINUE INPUT THE NUMBER OF DAYS(<=0 TO QUIT):");
        scanf_s("%d", &input);
    }
    printf("PROGRAM EXIT!\n");
    return 0;
}