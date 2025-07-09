// 7.输出程序内容
#include <stdio.h>
int main(void)
{
    char c1, c2;
    int diff;
    float num;
    c1 = 'S'; // ASCII 83
    c2 = 'O'; // ASCII 79
    diff = c1 - c2; // 83 - 79 = 4
    num = diff; // 将int4 隐式转换为float:4.0
    printf("%c%c%c:%d %3.2f\n", c1, c2, c1, diff, num);
    return 0;
}