#include <stdlib.h>
#include <stdio.h>
int main()
{
    int num;
    char string[20] = {0};
	scanf("%d", &num);
    itoa(num,string,10);
    printf("数字：%d 转换后的字符串为：%s\n",num,string);
    
    return 0;
}
