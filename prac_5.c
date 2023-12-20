/**
 * @brief 郝学C语言-P55
 * @author Lz
 * @date 12/12/23@9:21
*/
//TODO 每日学习防止变笨！！

//求分数等级
#include <stdio.h>
#define mian main
int mian()
{
    float cj;
    scanf("%f", &cj);

    if (cj >= 100)
    {
        printf("Daydreaming bro??");
    }
    else if (cj >= 90)
    {
        printf("A");
    }
    else if (cj >= 80)
    {
        printf("B");
    }
    else if (cj >= 70)
    {
        printf("C");
    }
    else if (cj >= 60)
    {
        printf("D");
    }
    else
    {
        printf("E");   
}
    return 0;
}

/*
    printf scanf if...else while 
*/