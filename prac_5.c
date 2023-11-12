/**
 * @brief numberless works!!
 * @author LeoZ
 * @date 20:06@11/8/2023
*/

#include<stdio.h>
void solve()
{
    
    int n=666, q, w, e, r;     //q 个位；w 十位；e 百位；r 千位
    for (n = 200; n <= 3000; n++)
    {
        q = n % 10;
        w = n / 10 % 10;
        e = n / 100 % 10;
        r = n / 1000;

        if (n < 1000 && q == e)
        {
            printf("%d\n", n);
        }
        else if (n >= 1000 && q == r && w == e)
        {
            printf("%d\n", n);
        }
    }
    
}

int main(void)
{  
    solve();
    return 0;
}
