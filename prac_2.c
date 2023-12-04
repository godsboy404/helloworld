#include<string.h>
#include<stdio.h>

int main(void)
{
	char hello[] = "Another Hello";
	printf("%s\n", hello);
	getchar();    //接收个字符 防止控制台直接结束
	return 0;
}
