#include "stdio.h"

int F(int n)
{
	int sum;
	sum = 0;
	while(n != 1)
	{
		if (n % 2 == 1)
		{
			n = 3 * n + 1;
			sum++;
		}
		else
		{
			n = n / 2;
			sum++;
		}
	}
	return sum + 1;
}

int main()
{
	int a, b, x, y, n, i, max;

	while(scanf("%d%d",&a,&b) != EOF)
	{
		if (a > b)
		{
			x = b;
			y = a;
		}
		else
		{
			x = a;
			y = b;
		}
		max = 0;
		for (i = x; i <= y; ++i)
		{
			n = F(i);
			if (n > max)
			{
				max = n;
			}
		}
		printf("%d %d %d\n",a,b,max);
	}
	return 0;
}
