/*2.学以致用
使用C语言打印一些内容格式
The NAME fmaily just may be $XXX.XX dollars ricyher
NAME和XXX.XX代表程序中的变量(name[40]和cash)
参考：prinf("The %s family just may be $%.2f richer!\n", name, cash);
*/

#include <stdio.h>
int main(void)
{
    char name[] = "jack";
    float cash = 12.47;
    printf("The %s family just may be $%.2f richer!\n", name, cash);
    return 0;
}