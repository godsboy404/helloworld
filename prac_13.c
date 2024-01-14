//
// Created by Leo Zhang on 2024/1/11.
//
#include <stdio.h>
int main() {
    int nums[] = {16,54,7,43,-5};
    int total = 0, *nPtr;
    nPtr = nums;

    while (nPtr < nums + 3)
        total += *nPtr++;
    printf("%d\n", *nPtr);

    return 0;
}