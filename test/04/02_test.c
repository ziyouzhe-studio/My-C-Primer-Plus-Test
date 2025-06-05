// 编写一个程序，提示用户输入名和姓，并执行下一操作

/*
a. 打印名和姓，包括双引号
b. 在宽度为20的字段右端打印名和姓，包括双引号
c. 在宽度为20的字段左端打印名和姓，包括双引号
d. 在比姓名宽度宽3的字段中打印名和姓
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char last_name[20];
    char first_name[20];
    int width;
    printf("请输入姓: \n");
    scanf("%s", first_name);
    printf("请输入名: \n");
    scanf("%s", last_name);

    printf("\n (a) 打印名和姓，包括双引号: \n");
    printf("\"%s%s\"", first_name, last_name);
    printf("\n (b) 在宽度为20的字段右端打印名和姓，包括双引号: \n");
    printf("\"%20s%s\"\n", first_name, last_name);
    printf("\n (c) 在宽度为20的字段左端打印名和姓，包括双引号: \n");
    printf("\"%s%-20s\"\n", first_name, last_name);

    width=strlen(first_name)+3;
    printf("\n (d) 在比姓名宽度宽3的字段中打印名和姓: \n");
    printf("%*s,%s\n",width,first_name,last_name);
    return 0;
}