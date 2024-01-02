#include<stdio.h>    

int main() {    
    FILE* openFile = fopen("hello.usr", "w");
    fprintf(openFile, "Good night!");

    fclose(openFile);
    printf("Writing to the file was successful. Closing the program.");

    return 0;
}