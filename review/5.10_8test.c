// 9.修改上一个程序，使其可以打印字母a~g
#include <stdio.h>
int main(void)
{
    char ch = 'a';
    while (ch <= 'g')
    {
        /* code */
        printf("%c\n", ch);
        ch++;
    }
    return 0;
}