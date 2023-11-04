#include <stdio.h>

void swap(int x, int y)
{
    int temp;
    temp = x; x = y; y= temp;
    printf("x=%d,\ty=%d\n", x, y);
}

int main(void)
{
    int x = 7, y = 11;
    printf("x=%d,\ty=%d\n", x, y);
    printf("swapped:\n");
    swap(x,y);

    return 0;
}
