#include<stdio.h>
int MaxCommonFactor( int a, int b)
{ 
   int c; 
   if(a<=0||b<=0) 
      return -1; 
   while(b!=0)
   { 
     c=a%b; 
     a=b;
     b=c;
   } 
  return a; 
}   
int main(void)
	{  
	  /*********Begin*********/
	  int a, b;
    scanf("%d,%d", &a,&b);
    printf("%d\n", MaxCommonFactor(a, b));

	  /*********End**********/ 
    return 0;
}
