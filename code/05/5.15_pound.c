
/*pound.c --定义带有一个参数的函数*/
#include <stdio.h>
void pound(int n);  // 形式参数
int main ()
{
    int times = 5;
    char ch = '!';
    float f = 6.0;
    pound (times);  // 实际参数
    pound (ch);
    pound ((int) f);
    return 0;
}
void pound(int n)
{
    while (n-->0)
    printf("#");
    printf("\n");
}

// 返回类型 函数名(参数类型1 参数名1, 参数类型2 参数名2, ...);