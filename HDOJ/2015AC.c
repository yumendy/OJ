#include "stdio.h"

void main(void)
{
	int m, n, i, j, x, y, sum;
	int a[100], b[100];

	while(scanf("%d%d",&n,&m) != EOF)
	{
		for (i = 0; i < n; ++i)
		{
			a[i] = 2 * (i + 1);
		}
		if (n % m == 0)
		{
			x = n / m;
			for (i = 0; i < x; ++i)
			{
				sum = 0;
				for (j = 0; j < m; ++j)
				{
					sum += a[i* m + j];
				}
				b[i] = sum / m;
			}
			for (i = 0; i < x; ++i)
			{
				if (i == x - 1)
				{
					printf("%d\n",b[i]);
				}
				else
				{
					printf("%d ",b[i]);
				}
			}
		}
		else
		{
			x = n / m;
			y = n % m;
			for (i = 0; i < x; ++i)
			{
				sum = 0;
				for (j = 0; j < m; ++j)
				{
					sum += a[i* m + j];
				}
				b[i] = sum / m;
			}
			sum = 0;
			for (i = m * x; i < n; ++i)
			{
				sum += a[i];
			}
			b[x] = sum;
			for (i = 0; i < x + 1; ++i)
			{
				if (i == x)
				{
					printf("%d\n",b[i]);
				}
				else
				{
					printf("%d ",b[i]);
				}
			}
		}
	}
}