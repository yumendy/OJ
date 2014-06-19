#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int T, i, m, n, flag, C = 1, t;
    char a[1002], b[1002];
    int sum[1002];
    scanf("%d",&T);
    t = T;
    while(T--)
    {
        printf("Case %d:\n",C++);
        scanf("%s %s",a ,b);
        memset(sum,0,sizeof(sum));
        m = strlen(a);
        n = 0;
        for(i = m - 1; i >= 0; i--)
        {
            sum[n++] = a[i] - '0';
        }
        m = strlen(b);
        n = 0;
        for(i = m - 1; i >= 0; i--)
        {
            sum[n++] += b[i] - '0';
        }
        flag = 0;
        for(i = 0; i < 1002; i++)
        {
            sum[i] += flag;
            if(sum[i] > 0)
            {
                flag = sum[i] / 10;
                sum[i] %= 10;
            }
            else
            {
                flag = 0;
            }
        }
        printf("%s + %s = ", a, b);
        for(i = 1001; i > 0; i--)
        {
            if(sum[i] != 0)
            {
                break;
            }
        }
        for(;i >= 0; i--)
        {
            printf("%d",sum[i]);
        }
        printf("\n");
        if(C != t + 1)
        {
            printf("\n");
        }
    }
    return 0;
}
