//
// Created by Leo Zhang on 2023/12/23.
// 求解出n以内所有奇数的和

#include <stdio.h>
int main(void)
{
    int n, num = 0, count, p=0;
    printf("我能光速算出你所给的数字以内所有奇数的和：");
    scanf("%d", &n);

    count = 1;

    while (count <= n) {
        num += count;
        p++;
        count += 2;
    }

    printf("Answer is %d XD\n", num);
    printf("进行了%d次循环\n", p);
    return 0;
}

