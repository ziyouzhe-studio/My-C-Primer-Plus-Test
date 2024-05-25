// 编写一个程序， 创建一个整型变量toes, 并将toes设置为10。程序中还要计算toes的两倍和toes的平方。该程序应打印3个值，分别描述以示区分
#include <stdio.h>
int main(void)
{
    int toes, tow_toes, square_toes;
    toes = 10;
    tow_toes = toes * 2;
    square_toes = toes * toes;

    printf("toes为:%d, tow_toes为:%d, square_toes:%d", toes, tow_toes, square_toes);
    return 0;
}