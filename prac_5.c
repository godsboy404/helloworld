/**
 * @brief 郝斌C语言-P72
 * @author Leo Zhang
 * @date 2023/12/23@15:49-22:24  距上次学习已经过去【一】天了，这次要好好学习，不然就真的变笨了
*/
//TODO 每日学习防止变笨！！

#include <stdio.h>
int main(void)
{
    int Counter;
    double sum = 0;

    for (Counter = 1; Counter <= 100; Counter++) {
        sum = sum + (1.0/Counter);
    }

    printf("%lf\n",sum);

    return 0;
}
/*
    printf scanf if/else for while
*/