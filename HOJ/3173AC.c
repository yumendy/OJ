#include "stdio.h"
#include "string.h"


int main(int argc, char const *argv[])
{
        int T, m, n, num, sum[10000], i, j, p = 0, big, r = 0;
        char a[102][102];
        scanf("%d",&T);
        while(T--)
        {
                p = 0;
                memset(a,'.',sizeof(a));
                scanf("%d%d",&m,&n);
                for (i = 1; i <= m; ++i)
                {
                        for (j = 1; j <= n; ++j)
                        {
                                scanf(" %c",&a[i][j]);
                        }
                }
                for (i = 0; i <= m + 1; ++i)
                {
                        for (j = 0; j <= n + 1; ++j)
                        {
                                if (a[i][j] == '.')
                                {
                                        num = 0;
                                        if (a[i - 1][j] == '#')
                                        {
                                                num++;
                                        }
                                        if (a[i + 1][j] == '#')
                                        {
                                                num++;
                                        }
                                        if (a[i][j - 1] == '#')
                                        {
                                                num++;
                                        }
                                        if (a[i][j + 1] == '#')
                                        {
                                                num++;
                                        }
                                        sum[p++] = num;
                                }
                        }
                }
                big = sum[0];
                for (i = 0; i < p; ++i)
                {
                        if (sum[i] > big)
                        {
                                big = sum[i];
                        }
                }
                r = 0;
                for (i = 0; i < p; ++i)
                {
                        if (sum[i] == big)
                        {
                                r++;
                        }
                }
                printf("%d\n", r);
        }
        return 0;
}