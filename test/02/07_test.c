// 编写一个程序，生成以下格式输出
#include <stdio.h>
#define LEN 10

void smile(void);

int main(void)
{
    smile();smile();smile();
    printf("\n");
    smile();smile();
    printf("\n");
    smile();
    printf("\n");
}

void smile(void)
{
    printf("Smile!");
}