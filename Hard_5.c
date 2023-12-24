//
// Created by Leo Zhang on 2023/12/23.
// 1~100以内奇/偶数的个数、和、平均数。

#include <stdio.h>
int main(void)
{
    int oddSum = 0, evenSum = 0, odds = 0, evens = 0;
    int NumCounter;

    for (NumCounter = 1; NumCounter <= 100; NumCounter++) {
        if (NumCounter % 2 != 0){
            oddSum += NumCounter;
            odds++;
        }
        else {
            evenSum += NumCounter;
            evens++;
        }
    }

    printf("has %d odd nums, their sum's %d, avg's %d.\n", odds, oddSum, (oddSum/odds));
    printf("has %d even nums, their sum's %d, avg's %d.\n", evens, evenSum, (evenSum/evens));

    return 0;
}
