/*stringf.c -- 字符串格式 */
#include <stdio.h>
#define BLURB "Authentic imitation!"
int main(void)
{
    printf("[%2s]\n", BLURB); // 2个字符宽度
    printf("[%24s]\n", BLURB); // 24个字符宽度 
    printf("[%24.5s]\n", BLURB); // 24个字符宽度，左对齐; .5s表示最多5个字符
    printf("[%-24.5s]\n", BLURB); // 24个字符宽度，右对齐
}