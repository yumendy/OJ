#include "stdio.h"

void main(void)
{
	int m, n, i, j, sum, flag = 1;
	double A[60][10], ave[10], a;

	while(scanf("%d%d",&n,&m) != EOF)
	{
		for (i = 0; i < n; ++i)
		{
			for (j = 0; j < m; ++j)
			{
				scanf("%lf",&A[i][j]);
			}
		}
		for (i = 0; i < n; ++i)
		{
			a = 0.0;
			for (j = 0; j < m; ++j)
			{
				a += A[i][j];
			}
			if (i != n - 1)
			{
				printf("%.2lf ",a / m);
			}
			else
			{
				printf("%.2lf\n",a / m);
			}
		}
		for (i = 0; i < m; ++i)
		{
			a = 0.0;
			for (j = 0; j < n; ++j)
			{
				a += A[j][i];
			}
			ave[i] = a / n;
			if (i != m - 1)
			{
				printf("%.2lf ",ave[i]);
			}
			else
			{
				printf("%.2lf\n",ave[i]);
			}
		}
		sum = 0;
		for (i = 0; i < n; ++i)
		{
			flag = 1;
			for (j = 0; j < m; ++j)
			{
				if (A[i][j] < ave[j])
				{
					flag = 0;
					break;
				}
			}
			if (flag == 1)
			{
				sum += 1;
			}
		}
		printf("%d\n\n",sum);
	}
}