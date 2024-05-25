// 编写一个程序打印你的姓名和地址
#include <stdio.h>
#define LEN 20
int main(void)
{
    char name[LEN] = "wuwei";
    char address[LEN] = "China";
    printf("You are name %s, \t you are address %s", name, address);
    return 0;
}