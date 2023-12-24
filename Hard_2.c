/*这个程序使用模块化编程思想对三个数字进行了从大到小的排序*/

#include <stdio.h>
#define mian main

void inArow(int *i, int *j, int *k)
{
    int temp;
    if (*i > *j)
    {
        temp = *i;
        *i = *j;
        *j = temp;
    }
    if (*i > *k)
    {
        temp = *i;
        *i = *k;
        *k = temp;
    }
    if (*j > *k)
    {
        temp = *j;
        *j = *k;
        *k = temp;
    }
}

int mian()
{
    int i, j, k;
    printf("Type in three numbers(e.g. 6 9 15): ");
    scanf("%d %d %d", &i, &j, &k);
    inArow(&i, &j, &k);
    printf("%d %d %d\n", i, j, k);

    return 0;
}
