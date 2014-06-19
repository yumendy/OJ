#include "stdio.h"
#include "math.h"

int main()
{
	int n, i, j, flag;
	double a[3][105], t;

	while(scanf("%d",&n) && n > 0)
	{
		for (i = 0; i < n; ++i)
		{
			scanf("%lf%lf",&a[0][i],&a[1][i]);
			a[2][i] = 1.0 * a[0][i] / sqrt(a[0][i] * a[0][i] + a[1][i] * a[1][i]);
		}
		flag = 0;
		for (i = 0; i < n; ++i)
		{
			for (j = n - 1; i < j; j--)
			{
				if (a[2][j] < a[2][j - 1])
				{
					t = a[2][j];
					a[2][j] = a[2][j - 1];
					a[2][j - 1] = t;
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
		for (i = n - 1; i > 0; i--)
		{
			printf("%.1lf %.1lf ",a[0][i],a[1][i]);
		}
		printf("%.1lf %.1lf\n",a[0][0],a[1][0]);
	}
	return 0;
}