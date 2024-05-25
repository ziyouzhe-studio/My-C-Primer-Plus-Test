// 一英寸相当于2.54厘米。编写一个程序，提示用户输入身高（/英寸），然后以厘米为单位显示身高
#include <stdio.h>
#define INCH 2.54
int main(void)
{
    float i, height;
    printf("请输入身高(英寸): ");
    scanf("%f", &i);
    height = i*INCH;
    printf("height = %f\n", height);
    return 0;
}