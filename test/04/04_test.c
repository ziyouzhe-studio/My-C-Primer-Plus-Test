/*
4.编写一个程序，提示用户输入身高（单位：英寸）和姓名，然后以下
面的格式显示用户刚输入的信息：
Dabney, you are 6.208 feet tall
使用float类型，并用/作为除号。如果你愿意，可以要求用户以厘米为
单位输入身高，并以米为单位显示出来。
*/

#include <stdio.h>
#include <string.h>
int main()
{
    float heigh;
    char name[40];
    printf("输入你的名字: \n");
    scanf("%s", &name);
    printf("输入你的身高(单位:cm): \n");
    scanf("%f", &heigh);
    heigh = heigh / 100;
    printf("%s, 你的身高是%.3fm \n", name, heigh);
    return 0;
}