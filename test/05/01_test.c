/*
1.编写一个程序，把分钟表示的的时间转换成小时和分钟表示的时间。
使用#define或const创建一个表示60的符号常量或const变量。通过while循环让用户重复输入值，
知道用户输入小于或等于0的值才停止循环。
*/

#include <stdio.h>
// 定义符号常量
#define MINUTES_PER_HOUR 60
int main()
{
    int minutes;
    // 提示用户输入分钟数
    printf("请输入时间(分钟)， 输入0或负数以退出: ");
    scanf("%d", &minutes);

    // 使用while循环直到输入小于或等于0
    while (minutes > 0)
    {
        /* code */
        //计算小时和剩余时间
        int hours = minutes / MINUTES_PER_HOUR;
        int remaining_minutes = minutes % MINUTES_PER_HOUR;

        // 输出转换后的时间
        printf("%d 分钟等于 %d 小时 %d 分钟\n", minutes, hours, remaining_minutes);

        // 提示用户再次输入
        printf("请输入时间(分钟)，输入0或负数以退出：");
        scanf("%d", &minutes);
    }
    
    printf("程序结束.\n");
    return 0;
}