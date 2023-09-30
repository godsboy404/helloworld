#include<stdio.h>
	int main()
	{  
	/********* Begin *********/
    int a, b, c, max;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if(a>b && a>c)
        max = a;
    else if(b>a && b>c)
        max = b;
    else
        max = c;
	
    printf("max=%d", max);
	/********* End *********/
       return 0;
	}
