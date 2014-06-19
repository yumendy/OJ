#include "stdio.h"

int main()
{
	float t, a[2][100], b[100];
	int m, n, i, j, k, flag;


	while(scanf("%d%d%d",&n,&m,&k) != EOF)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		for (i = 1; i <= m; ++i)
		{
			a[0][i] = i;
		}
		for (i = 0; i < n; ++i)
		{
			for (j = 1; j <= m; ++j)
			{
				scanf("%f",&t);
				a[1][j] += t;
			}
		}
		flag = 0;
		for (i = 0; i < m - 1; ++i)
		{
			for (j = m; i <= j; j--)
			{
				if (a[1][j - 1] > a[1][j])
				{
					t = a[1][j];
					a[1][j] = a[1][j - 1];
					a[1][j - 1] = t;
					t = a[0][j];
					a[0][j] = a[0][j - 1];
					a[0][j - 1] = t;
					flag = 1;
				}
			}
			if (flag == 0)
			{
				break;
			}
			else
			{
				flag = 0;
			}
		}
		j = 0;
		for (i = m; i > m - k; i--)
		{
			b[j++] = a[0][i];
		}
		flag = 0;
		for (i = 0; i < k; ++i)
		{
			for (j = k - 1; i < j; j--)
			{
				if (b[j - 1] > b[j])
				{
					t = b[j];
					b[j] = b[j - 1];
					b[j - 1] = t;
					flag = 1;
				}
			}
			if (flag == 0)
			{
				break;
			}
			else
			{
				flag = 0;
			}
		}
		printf("%.0f",b[k - 1]);
		for (i = k - 2; i >= 0; i--)
		{
			printf(" %.0f",b[i]);
		}
		printf("\n");
	}
	return 0;
}