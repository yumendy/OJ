#include "stdio.h"

int lcm(int a,int b)
{
	int x, y, m;
	x = a;
	y = b;
	if (b > a)
	{
		m = a;
		a = b;
		b = m;
	}

	while(1)
	{
		if (a % b != 0)
		{
			m = a % b;
			a = b;
			b = m;
		}
		else
		{
			m = b;
			break;
		}
	}

	return x / m * y;
}

int main()
{
	int n, m, i, j, a, b, k, lst[1000];

	scanf("%d",&n);
	for (i = 0; i < n; ++i)
	{
		scanf("%d",&m);
		for (j = 0; j < m; ++j)
		{
			scanf("%d",&lst[j]);
		}
		if (m == 1)
		{
			printf("%d\n",lst[0]);
		}
		else
		{
			k = lcm(lst[0],lst[1]);
			for (j = 2; j < m; ++j)
			{
				k = lcm(k,lst[j]);
			}
			printf("%d\n",k);
		}
	}
	return 0;
}