#include <stdio.h>

int main() {
    int m = 3, n = 4, x; 
        x = -m++;             // ∵m++保留旧值=3，∴x=-3.
        x = x + 8 / ++n;      // ++n保留新值=5，原式化为x = x + 8 / 5，得x = -2.
        printf("%d\n", x);    // x为-2.
    
    return 0;
}
