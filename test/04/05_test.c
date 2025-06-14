/*
5.编写一个程序，提示用户输入以兆位每秒（Mb/s）为单位的下载速度
和以兆字节（MB）为单位的文件大小。程序中应计算文件的下载时间。注
意，这里1字节等于8位。使用float类型，并用/作为除号。该程序要以下面
的格式打印 3 个变量的值（下载速度、文件大小和下载时间），显示小数点
236
后面两位数字：
At 18.12 megabits per second, a file of 2.20 megabytes
downloads in 0.97 seconds.
*/

#include <stdio.h>
#include <string.h>
int main()
{
    float speed, size, time;
    printf("请输入你的下载速度(单位:Mbit/s): ");
    scanf("%f", &speed);
    printf("请输入文件大小(单位:MB): ");
    scanf("%f", &size);
    time = size * 8 / speed;
    printf("At %.2f memegabits per second, a file of %.2f megabytes downloads in %.2f seconds.", speed, size, time);
    return 0;
}