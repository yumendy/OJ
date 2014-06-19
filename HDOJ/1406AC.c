#include "stdio.h"

int main(int argc, char const *argv[])
{
	int t, a, b, sum, i, j, o;
	scanf("%d",&t);
	while(t--)
	{
		o = 0;
		scanf("%d%d",&a,&b);
		if (a > b)
		{
			i = a;
			a = b;
			b = i;
		}
		for (i = a; i < b + 1; ++i)
		{
			sum = 1;
			for (j = 2; j < i / 2 + 1; ++j)
			{
				if (i % j == 0)
				{
					sum += j;
				}
			}
			if (sum == i)
			{
				o++;
			}
		}
		printf("%d\n", o);
	}
	return 0;
}
