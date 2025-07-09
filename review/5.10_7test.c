// 8.输出程序内容
#include <stdio.h>
#define TEN 10
int main(void)
{
    int n = 0;
    while (n++ < TEN)
    {
        /* code */
        printf("%5d", n);
        printf("\n");
    }
    return 0;
}