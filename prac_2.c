#include<stdio.h>
	int main(void)
	{
    int n;
    int *h = &n;
    scanf("%d", &n);
    printf("%d", n);
    printf("%d", *h);
    
    return 0;
  }
