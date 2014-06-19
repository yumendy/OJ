#include "stdio.h"

int main()
{
	int n, m, i, j, t, sum = 0, f = 0, a[2][5000];

	scanf("%d%d",&m,&n);
	for (i = 0; i < n; ++i)
	{
		scanf("%d%d",&a[0][i],&a[1][i]);
	}

	for (i = 0; i < n - 1; ++i)
	{
		for (j = n - 1; i < j; j--)
		{
			if (a[0][j - 1] > a[0][j])
			{
				t = a[0][j];
				a[0][j] = a[0][j - 1];
				a[0][j - 1] = t;
				t = a[1][j];
				a[1][j] = a[1][j - 1];
				a[1][j - 1] = t;
				f = 1;
			}
		}
		if (f == 0)
		{
			break;
		}
		else
		{
			f = 0;
		}
	}

	for (i = 0; i < n; ++i)
	{
		if (m >= a[1][i])
		{
			sum += a[1][i] * a[0][i];
			m -= a[1][i]; 
		}
		else
		{
			sum += a[0][i] * m;
			m = 0;
		}
		if (m == 0)
		{
			break;
		}
	}

	printf("%d\n",sum);

	return 0;
}