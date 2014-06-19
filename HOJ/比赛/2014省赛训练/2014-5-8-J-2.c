#include "stdio.h"

int gcd(int x, int y)
{
	int z;
	while(y)
	{
		z = y;
		y = x % y;
		x = z;
	}
	return x;
}

int main(int argc, char const *argv[])
{
	int a, m, t, i, g;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&a,&m);
		g = gcd(a, m);
		if (g > 1)
		{
			printf("Not Exist\n");
		}
		else
		{
			i = 1;
			while(a * i % m != 1)
			{
				i++;
			}
			printf("%d\n", i);
		}
	}
	return 0;
}