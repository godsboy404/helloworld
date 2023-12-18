#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="";
	int z,x,c,i;
	int inword=0;
	printf("请输入字符串:");
	gets (a); 
	printf("输入的为:%s\n",a);
	printf("×Ö·ûÊýÎª%d µ¥´ÊÊýÎª%d ÐÐÊýÎª%d\n",z,x,c);
	z=strlen(a)-1;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		inword=0;
		else if(inword==0);
		{
			inword=1;
			x++;
		}
	}
	c=(strlen(a)-1)/80;
	
	return 0;

}