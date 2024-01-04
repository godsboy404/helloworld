/**
 * @brief review of C
 * @author Leo Zhang
 * @date 2024/1/4 18:03
*/

#include <stdio.h>
#include <math.h>
#define ROW 2
#define COL 4

int PPBIZON[ROW][COL] = {5, 8, 9,   3,
                         2, 8, 3-9, 1};

int Tweet(int a, int b, int c) {
    int delta = b * b - 4 * a * c;
    if (delta > 0) {
        printf("x1 = %f, x2 = %f", (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a));
    } else if (delta == 0) {
        printf("x = %f", -b / (2 * a));
    } else {
        printf("No Solution");
    }
    
    return 0;
}

int main() {
    int a = PPBIZON[1][2];
    printf("%d", a);

    FILE *tc = fopen ("a.txt", "w");
    fprintf(tc, "ello %d", a);
    fclose(tc);

    return 0;
}