#include "stdio.h"

int pow2(int n)
{
	int i, sum;
	sum = 1;
	for (i = 0; i < n; ++i)
	{
		sum *= 2;
	}
	return sum;
}

int main()
{
	int t, m, n, i, a[300], flag, f, j;
	__int64 sum;

	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&m,&n);
		flag = 0;
		for (i = 1; i <= n; ++i)
		{
			scanf("%d",&a[i]);
		}
		for (i = 1; i <= n; ++i)
		{
			if (a[i])
			{
				flag = 1;
				break;
			}
		}
		if (!flag)
		{
			if (m >= n)
			{
				f = 0;
			}
			else
			{
				f = n - m;
			}
		}
		else
		{
			if (i > m)
			{
				f = n - m;
			}
			else
			{
				f = n - i;
			}
		}
		if (!f)
		{
			printf("0 RMB\n");
		}
		else
		{
			sum = pow2(f) - 1;
			printf("%I64d0000 RMB\n",sum);
		}
	}
	return 0;
}