#include "stdio.h"

int gcd(int a, int b)
{
	int m, t;
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	m = a % b;
	while(m != 0)
	{
		a = b;
		b = m;
		m = a % b;
	}
	return b;
}

int lcm(int a, int b)
{
	return a / gcd(a,b) * b;
}

int main(int argc, char const *argv[])
{
	int x, y, i, j, sum;
	scanf("%d%d",&x,&y);
	sum = 0;
	for (i = 2; i <= y; ++i)
	{
		for (j = 2; j <= y; ++j)
		{
			if (i * j <= y * x)
			{
				if (gcd(i,j) == x && lcm(i,j) == y)
				{
					sum++;
				}
			}
			else
			{
				break;
			}
		}
	}
	printf("%d\n", sum);
	return 0;
}