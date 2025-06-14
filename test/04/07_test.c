/*
7.编写一个程序，将一个double类型的变量设置为1.0/3.0，一个float类
型的变量设置为1.0/3.0。分别显示两次计算的结果各3次：一次显示小数点
后面6位数字；一次显示小数点后面12位数字；一次显示小数点后面16位数
字。程序中要包含float.h头文件，并显示FLT_DIG和DBL_DIG的值。1.0/3.0
的值与这些值一致吗？
*/

#include <stdio.h>
#include <float.h>
int main()
{
    double d_val = 1.0 / 3.0;
    float f_val = 1.0f / 3.0f;

    printf("float型: \n");
    printf("默认(6位小数): %.6f\n", f_val);
    printf("12位小数: %.12f\n", f_val);
    printf("16位小数: %.16f\n", f_val);

    printf("double 型\n");
    printf("默认(6位小数): %.6f\n", d_val);
    printf("12位小数: %.12f\n", d_val);
    printf("16位小数: %.16f\n", d_val);

    printf("\n浮点数精度: \n");
    printf("float 型有效位数(FLT_DIG) = %d \n", FLT_DIG);
    printf("double 型有效数位(DBL_DIG) = %d \n", DBL_DIG);

    printf("\n 结论: \n");
    printf("float 的有效位数: %.6f 以内较为准确，超过12位就会显示误差. \n");
    printf("double 的有效位数: %.12f 较为准确，16位时仍有细微误差. \n");

    return 0;
}