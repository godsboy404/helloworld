#include<stdio.h>
	void jolly(void)
	{
		printf("For he's a jolly good fellow!\nFor he's a jolly good fellow!\nFor he's a jolly good fellow!");
	}
	
	void deny(void)
	{
		printf("\nWhich nobody can deny!");
	}
	
	int main(void)
	{  
		int i;
		i = 1 + (int)rand() % 100;
		printf("%d", i);
		
		return 0;
	} 
