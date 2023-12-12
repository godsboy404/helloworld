// 用指针交换两个整数的值
#include <stdio.h>
<<<<<<< HEAD
int main()
{
	char i;
	scanf("%c", &i);
	printf("  %c\n %c%c%c\n%c%c%c%c%c\n", i, i, i, i, i, i, i, i, i);
	
	return 0;
=======

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
>>>>>>> ffc1040eecf0c94454498bf606f18878ce61a113
}
