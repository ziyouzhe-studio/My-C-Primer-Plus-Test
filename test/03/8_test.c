/*
在美国的体积测量体系中，1脱品等于2杯，1杯等于8盎司，1盎司等于大于2汤勺，1大汤勺等于3茶勺。
编写一个程序，提示用户输入杯数，并以脱品、盎司、汤勺、茶勺为单位显示等价容量。思考对于该程序，为何使用浮点数类型比整数类型更合适？
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float cup, pint, ounce, spoon, teaspoon;
    printf("请输入杯数: ");
    scanf("%f", &cup);
    pint = cup / 2;
    ounce = 8 * cup;
    spoon = 8 * cup *2;
    teaspoon = 8 * cup * 2 * 3;
    printf("脱品:%f 盎司:%f 汤勺:%f 茶勺:%f\n", pint, ounce, spoon, teaspoon);
    return 0;
}