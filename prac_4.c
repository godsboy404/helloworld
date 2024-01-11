/**
 * @brief review of C
 * @author Leo Zhang
 * @date 2024/1/4 18:03
*/

#include <stdio.h>
#include <math.h>
#define ROW 3
#define COL 4   //规定数组长度时，从1开始；定义数组长度时，从0开始！！

char PPBIZON[ROW][COL] = {
    {'a', 'b', 'c', 'd'},
    {'e', 'f', 'O', 'h'},
    {'t', 'j', 'k', 'l'}
};

float Tweet(double a, double b, double c) {
    double delta = b * b - 4 * a * c;
    if (delta > 0) {
        printf("x1 = %f, x2 = %f\n", (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a));
    } else if (delta == 0) {
        printf("x = %f\n", -b / (2 * a));
    } else {
        printf("帅");
    }
    
    return 0;
}

int main() {

    char LOL[] = {PPBIZON[1][2], PPBIZON[2][0], PPBIZON[2][0], PPBIZON[1][2]};
    printf("帅 %c%c%c%c", LOL[0], LOL[1], LOL[2], LOL[3]);

    FILE *tc = fopen ("a.txt", "w");
    fprintf(tc, "ello gays");
    fclose(tc);

    getchar();
    if (getchar() == 'c') {
        printf("!\n");
    } else {
        printf("阿米诺斯\n");
    }
    
    Tweet(52, -40, 8);

    return 0;
}