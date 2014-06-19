#include "stdio.h"
#include "math.h"

int main(int argc, char const *argv[])
{
        int N, T, K, Q, q[100], i, j, k, p;
        double c[101][6], d[100], sum, min;
        scanf("%d",&T);
        while(T--)
        {
                scanf("%d",&K);
                scanf("%d",&N);
                for (i = 1; i <= N; ++i)
                {
                        for (j = 1; j <= K; ++j)
                        {
                                scanf("%lf",&c[i][j]);
                        }
                }
                scanf("%d",&Q);
                for (i = 0; i < Q; ++i)
                {
                        scanf("%d",&q[i]);
                }
                for (i = 0; i < Q; ++i)
                {
                        p = 0;
                        for (j = 1; j <= N; ++j)
                        {
                                sum = 0.0;
                                if (j != q[i])
                                {
                                        for (k = 1; k <= K; ++k)
                                        {
                                                sum += (c[q[i]][k] - c[j][k]) * (c[q[i]][k] - c[j][k]);
                                        }
                                        d[p++] = sum;
                                }
                        }
                        min = d[0];
                        for (j = 1; j < p; ++j)
                        {
                                if (d[j] < min)
                                {
                                        min = d[j];
                                }
                        }
                        printf("%.3lf\n", sqrt(min));
                }
        }
        return 0;
}