#include<stdio.h>
	int main(void)
	{  
	  int num1, num2=1, MAXCOUNT, result=0;
    scanf("%d", &MAXCOUNT);

    if (MAXCOUNT < 0)
    {
      printf("0");
    }
    
    else if (MAXCOUNT == 0)
    {
      printf("1");
    }
    
    else
    {
      for ( num1 = 1; num1 <= MAXCOUNT; num1++)
      {
        num2 = num1 * num2;
        result += num2;
      }
      printf("%d", result);
    }

    return 0;
	}
