/*
13.编写一条语句，完成下列任务
a.将变量x的值减少1
b.将n除以k的余数赋值给m
c.q除以b减去a，并将结果赋给p
d.a与b之和除以c与d的乘积，并将结果赋给x
*/

#include <stdio.h>
int main(void)
{
    // 声明和初始化变量
    float x = 10.0; // 初始值示例
    int n = 17, k = 5, m = 0; // 整数类型用于余数运算
    float q = 20.0, b = 4.0, a = 2.0, p = 0.0; // 浮点类型用于除法
    float c = 3.0, d = 2.0; // 浮点类型用于乘法和除法
    int counter = 0; // 计数器，用于展示自增/自减

    // a. 将变量x的值减少1
    x--;
    printf("Task a: After decreasing x by 1: x = %.2f\n", x);
    counter++; // 记录操作次数

    // b. 将n除以k的余数赋给m
    m = n % k;
    printf("Task b: Remainder of n divided by k: m = %d\n", m);
    counter++;

    // c. q除以b减去a, 并将结果赋给p
    p = q / b - a;
    printf("Task d: q divided by b minus a: p = %.2f\n", p);
    counter++;

    // d. a与b之和除以c与d的乘积，并将结果赋给x
    x = (a + b) / (c * d);
    printf("Task d: (a + b) divided by (c * d): x = %.2f\n", x);

    // 展示自增、自减：使用循环输出操作历史
    printf("\n Operation history (using decrement counter):\n");
    while (counter > 0)
    {
        /* code */
        printf("Completed operation %d\n", counter);
        counter--; // 倒叙输出操作历史 
    }
    return 0;
}