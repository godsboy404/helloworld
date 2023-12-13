// 用指针交换两个整数的值
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    printf("请输入两个整数：");
    scanf("%d %d", &a, &b);
    printf("交换前的值：a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("交换后的值：a = %d, b = %d\n", a, b);
    return 0;
}
