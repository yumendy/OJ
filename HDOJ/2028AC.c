#include "stdio.h"

long LCMP(long a, long b)
{
	long t, c, m, n;
	if (b > a)
	{
		t = a;
		a = b;
		b = t;
	}
	m = a;
	n = b;
	while(b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return (m / a * n);
}


void main(void)
{
	long n, m, i, j;
	long a[100];

	while(scanf("%ld",&n) != EOF)
	{
		for (i = 0; i < n; ++i)
		{
			scanf("%ld",&a[i]);
		}
		if (n == 1)
		{
			printf("%ld\n",a[0]);
		}
		else
		{
			for (i = 0; i < n - 1; ++i)
			{
				a[i + 1] = LCMP(a[i], a[i + 1]);
			}
			printf("%ld\n",a[n - 1]);
		}
	}
}