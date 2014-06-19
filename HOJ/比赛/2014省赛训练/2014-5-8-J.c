#include "stdio.h"
#include "stdlib.h"

int x, y, q;

void ex(int a, int b)
{
	int t;
	if (!b)
	{
		x = 1;
		y = 0;
		q = a;
	}
	else
	{
		ex(b, a % b);
		t = x;
		x = y;
		y = t - a / b * y;
	}
}

int main(int argc, char const *argv[])
{
	int T, i, a, b, t, flag;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&a,&b);
		if (b == 1)
		{
			printf("1\n");
			continue;
		}
		t = a < b ? a : b;
		flag = 1;
		for (i = 2; i <= t; ++i)
		{
			if (a % i == 0 && b % i == 0)
			{
				flag = 0;
				break;
			}
		}
		if (!flag)
		{
			printf("Not Exist\n");
		}
		else
		{
			ex(a, b);
			while(x < 0)
			{
				x += b;
			}
			printf("%d\n", x);
		}
	}
	return 0;
}
