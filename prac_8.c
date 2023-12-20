#include<stdio.h>
#include<string.h>
char a[100]={0};
int b;
char* i=a;
char* j;
char c;
void reverse()
{
    while(i<j)
    {
        c= *i;
        *i= *j;
        *j=c;
        i++;
        j--;
    }
}
int main()
{
    printf("put in strings:");
    gets(a);
    b = strlen(a) - 1;
    j = a + b;
    reverse();
    puts(a);
    
    return 0;
}