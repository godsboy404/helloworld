#include <stdio.h>

int main() {
    FILE *file = fopen("in.txt", "w");
    if (file == NULL) {
        printf("无法打开文件\n");
        return 1;
    }

    fprintf(file, "HelloWorld");

    fclose(file);
    return 0;
}
