// 一个水分子质量约为3.0*10-23克。1夸脱水大约是950克。编写一个程序，提示用输入水的夸脱数，并显示水分子的数量
#define WATER 3.0e-23 // 一个水分子的质量
#define DEHYDRATION 950 // 一夸脱水的质量
int main(void)
{
    float i, total; // total表示水分子的数量
    printf("please input: ");
    scanf("%f", &i);
    total = i * DEHYDRATION / WATER;
    printf("%e\n", total);
    return 0;
}