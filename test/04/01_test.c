// 编写一个程序，提示用户输入名字和姓氏，然后打印出"名+姓"的格式

#include <stdio.h>
#include <string.h> // 处理字符串

int main()
{
    char last_name[20], first_name[20];
    printf("请输入名字: \n");
    scanf("%s", last_name);
    printf("请输入姓氏: \n");
    scanf("%s", first_name);
    printf("%s.%s", last_name, first_name);
    return 0;
}