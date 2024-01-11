#include <stdio.h>
#include <string.h>

struct Demon{
    char name[51];
    int age;
    double collars;
} lemon;

int main() {
    struct Demon;
    lemon.age = 18;
    lemon.collars = 25.74;
    strcpy(lemon.name, "Babe");
    printf("%d %.2f %s", lemon.age, lemon.collars, lemon.name);

    return 0;
}