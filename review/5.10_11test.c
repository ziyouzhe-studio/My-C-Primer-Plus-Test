// 11.下面的程序会打印什么？
#define MESG "COMPUTER BYTES DOG"
#include <stdio.h>
int main(void)
{
    int n = 0;
    while (n < 5)
    {
        /* code */
        printf("%s\n", MESG);
        n++;
    }
    printf("That's all.\n");
    return 0;
}