// 4.找出下面的程序错误
#include <stdio.h>
int main(void)
{
    int i = 1;
    float n;
    printf("Watch out! Here come a bunch of fractions!\n");
    while (i < 30)
    {
        /* code */
        n = 1.0 / i;
        printf("%f", n);
        i++;
    }
    printf("\n That's all, folks!\n");
    return 0;
}