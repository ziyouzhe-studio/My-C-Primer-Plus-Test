// 编写一个程序，生成以下输出

#include <stdio.h>

void br(void);
void ic(void);

int main(void)
{
    printf("Brazil, Russia, India, China\n");
    printf("India, China,\n");
    printf("Brazil, Russia\n");
    br();
    ic();
    return 0;
}

void br(void)
{
    printf("Brazil, Russia\n");
}

void ic(void)
{
    printf("India, China\n");
}
