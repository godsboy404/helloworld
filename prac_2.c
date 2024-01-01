/**
 * @brief 用数组的方式初始化字符串
 * @author Lz
 * @date 12/6/23 @ 18:58
*/

#include<string.h>
#include<stdio.h>

int main(void)
{
	char hello[] = "HE'S WATCHING YOU!";
	printf("%s\n", hello);
	getchar();    //接收个字符 防止控制台直接结束
	return 0;
}
