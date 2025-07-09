// 假设下面时完整程序的一部分，它们分别打印什么
#include <stdio.h>
int main(void)
{
    // a.
    printf("a. 输出: \n");
    int x = 0;
    while (++x < 3)
    {
        /* code */
        printf("%4d", x);
    }
    printf("\n\n");

    // b.
    printf("b. 输出: \n");
    x = 100;
    while (x++ < 103)
    {
        /* code */
        printf("%4d\n", x);
    }
    printf("%4d\n", x);
    printf("\n");

    // c.
    printf("c. 输出: \n");
    char ch = 's';
    while (ch < 'w')
    {
        /* code */
        printf("%c", ch);
        ch++;
    }
    printf("%c\n", ch);
    return 0;
}