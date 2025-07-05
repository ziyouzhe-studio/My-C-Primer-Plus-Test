// 3.对下列各表达式求值
/*
a.30.0 / 4.0 * 5.0;
b.30.0 / (4.0 * 5.0);
c.30 / 4 * 5;
d.30 * 5 / 4;
e.30 / 4.0 * 5;
f.30 / 4 * 5.0;
*/

#include <stdio.h>
int main(void)
{
    double result_a = 30.0 / 4.0 * 5.0;
    double result_b = 30.0 / (4.0 * 5.0);
    int result_c = 30 / 4 * 5; // 全部整数
    int result_d = 30 * 5 / 4; // 全部整数
    double result_e = 30 / 4.0 * 5; // 混合运算
    double result_f = 30 / 4 * 5.0; // 整数除法运算，再参与浮点数

    printf("a. 30.0 / 4.0 * 5.0 = %.2f\n", result_a); // 37.50
    printf("b. 30.0 / (4.0 * 5.0) = %.2f\n", result_b); // 1.50
    printf("c. 30 / 4 * 5 = %d\n", result_c); // 7 * 5 = 35
    printf("d. 30 * 5 / 4 = %d\n", result_d); // 150 / 4 = 37
    printf("e. 30 / 4.0 * 5 = %2.f\n", result_e); // 7.5 * 5 = 37.5
    printf("f. 30 / 4 * 5.0 = %2.f\n", result_f); // 30/4=7 -> 7 * 5.0 = 35.0
    return 0;
}