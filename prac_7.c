#include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int num;
	int i;
	int flag=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			flag=1;
			printf("%d",i+1);
			break;
		}
	}
	if(flag==0)
		printf("-1");
		
	return 0;
}
