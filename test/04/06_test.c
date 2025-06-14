/*
6.编写一个程序，先提示用户输入名，然后提示用户输入姓。在一行打
印用户输入的名和姓，下一行分别打印名和姓的字母数。字母数要与相应名
和姓的结尾对齐，如下所示：
Melissa Honeybee
7       8

接下来，再打印相同的信息，但是字母个数与相应名和姓的开头对齐，
如下所示：
Melissa Honeybee
7       8
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char name[40], surname[40];
    int wname, wsname;
    printf("请输入你的姓氏: ");
    scanf("%s", &name);
    printf("输入你的名字: ");
    scanf("%s", &surname);
    wname = printf("%s", name),
    printf(" ");
    wsname = printf("%s", surname);
    printf("\n%*d %*d", wname, wname, wsname, wscanf);
    return 0;
}