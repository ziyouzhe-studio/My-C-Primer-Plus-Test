// 编写一个程序，要求输入一个ASCII码值（如66），然后打印
#include <stdio.h>
int main(void)
{
    char uc_char;
    printf("enter an ASCII value:\n");
    scanf_s("%d", &uc_char);
    printf("ASCII value is %d, Character is %c.\n", uc_char, uc_char);
    getchar();
    getchar(); // 有一个输入，要多用一个getchar()
    return 0;
}