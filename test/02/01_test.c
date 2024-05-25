// 编写一个程序，调用一次printf()函数，把你的姓名打印在一行。在调用一次printf函数，把你的姓名分别打印在两行。然后在调用两次printf()函数，把你的姓名打印在一行。输出应如下所示:
/*
Gustav Mahler 第一次打印
Gustav 第二次打印
Mahler 第二次打印
Gustav Mahler 第三次和第四次打印
*/

#include <stdio.h>
int main(void)
{
    printf("Gustav Mahler\n");
    printf("Gustav\n" "Mahler\n");
    printf("Gustav Mahler\n");
    return 0;
}