#include <stdio.h>
#include <stdbool.h>
#define TheyHaveEggs true

void pickUp(const char* item) {
    printf("Picking up %s\n", item);
}

int main() {
    pickUp("a gallon of milk");
	if (TheyHaveEggs)
		pickUp("a dozen of eggs");

    return 0;
}
