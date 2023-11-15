/**
 * @brief busy learning!
 * @author LeoZ
 * @date rite now XD
*/

#include<stdio.h>
void factorial(int n)
{
	int a[64]; // 储存结果的数组 
    int jinWei = 0 ; // 进位之后的余数 
     a[0] = 1 ; // 初始化 a[0] 让其第一次运算结果等于 该数本身 
    int length = 1, temp = 1; //
    int i , j ;
    for(i = n ; i > 1 ; i-- )
	{
		jinWei = 0 ;
		for( j = 0 ; j < length ; j++ )
		{
			temp = a[j] * i + jinWei ;
			a[j] = temp % 10000 ;
			jinWei = temp / 10000 ;
		}
		a[j] = jinWei ;
		if(jinWei > 0)
		{
			length ++ ;
		}
	 } 
	 printf("%d",a[length - 1]);
	 for(i = length - 2 ; i >= 0 ; i--)
	 printf("%04d" , a[i]);
 } 
 int main()
 {
 	int n ;
 	scanf("%d",&n);
 	factorial(n);
 }
