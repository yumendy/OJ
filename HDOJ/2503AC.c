#include "stdio.h"

int lcm(int x, int y)
{
	int a, b, m;
	if (x > y)
	{
		a = x;
		b = y;
	}
	else
	{
		a = y;
		b = x;
	}
	while(1)
	{
		if (a % b == 0)
		{
			m = b;
			break;
		}
		else
		{
			m = a % b;
			a = b;
			b = m;
		}
	}
	return m;
}

int main()
{
	int n, a, b, c, d, e, f, i, k;
	scanf("%d",&n);
	for (i = 0; i < n; ++i)
	{
		scanf("%d%d%d%d",&a,&b,&c,&d);
		f = b * d;
		e = a * d + b * c;
		k = lcm(e,f);
		printf("%d %d\n",e / k,f / k);
	}
	return 0;
}