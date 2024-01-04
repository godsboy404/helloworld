#include <stdio.h>

int main() {
    int r0ws, cols = 1;

    printf("请输入x数: ");
    scanf("%d", &r0ws);

    for (int i = 0; i < r0ws; i++) {
        for (int space = 1; space <= r0ws - i; space++) {
            printf("  ");
        }

        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0) {
                cols = 1;
            } else {
                cols = cols * (i - j + 1) / j;
            }
            printf("%4d", cols);
        }

        printf("\n");
    }

    return 0;
}
