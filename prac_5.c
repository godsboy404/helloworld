/**
 * @brief 郝斌C语言-P72
 * @author Leo Zhang
 * @date 2023/12/23@15:49-22:24  距上次学习已过【一】天，一定要好好学习，不然就真的变笨了
*/
//TODO 每日学习防止变笨！！

/**
 * @brief multi-dimensional array demo
 * @author Leo Zhang
 * @date 2024/1/15  18:49
*/

#include <stdio.h>
#define COL 4
#define LN 3
#define BID 2

int main() {
    int num[LN][COL][BID] = {{{1, 2,}, {3, 4}, {5, 6}, {7, 8}},
                             {{9, 10}, {11,12},{13,14},{15,16}},
                             {{17,18}, {19,20},{21,22},{23,24}}};

    int i, j, k;
    for (i = 0; i < LN; ++i)
        for (j = 0; j < COL; ++j)
            for (k = 0; k < BID; ++k)
                printf("%d  ", num[i][j][k]);

    return COL*LN*BID;  //return 24
}

/**
* @result
 * 1  2  3  4  5  6  7  8  9  10  11  12  13  14  15  16  17  18  19  20  21  22  23  24
*/