#include<stdio.h>    

int main() {    
    FILE* file = fopen("hello.usr", "w");
    fprintf(file, "Hello world!");

    fclose(file);
    printf("Writing to the file was successful. Closing the program.");

    return 0;
}