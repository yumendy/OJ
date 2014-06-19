#include "stdio.h"

int gcd(int a,int b)
{
	int t;
	while(a % b)
	{
		t = a % b;
		a = b;
		b = t;
	}
	return b;
}

int main(int argc, char const *argv[])
{
	long a, b;
	int x, y, t, c;
	while(scanf("%d%d%ld%ld",&x,&y,&a,&b) != EOF)
	{
		if (x < y)
		{
			t = x;
			x = y;
			y = t;
		}
		c = x * y / gcd(x, y);
		printf("%ld\n", b / c - (a - 1) / c);
	}
	return 0;
}
