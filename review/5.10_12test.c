/*
12.编写一条语句，完成下列各项任务（或者说，使其具有以下副作用）：
a.将变量x的值增加10
b.将变量x的值增加1
c.将a与b之和的两倍赋给c
d.将a于b的两倍之和赋给c
*/

#include <stdio.h>
int main()
{
    // 声明和初始化变量
    int x = 5;               // 初始值示例
    int a = 3, b = 4, c = 0; // 初始值示例

    // a. 将变量 x 的值增加 10
    x += 10;
    printf("After increasing x by 10: x = %d\n", x);

    // b. 将变量 x 的值增加 1
    x += 1;
    printf("After increasing x by 1: x = %d\n", x);

    // c. 将 a 与 b 之和的两倍赋给 c
    c = 2 * (a + b);
    printf("Twice the sum of a and b: c = %d\n", c);

    // d. 将 a 与 b 的两倍之和赋给 c
    c = a + 2 * b;
    printf("Sum of a and twice b: c = %d\n", c);

    return 0;
}