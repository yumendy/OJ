#include "stdio.h"

void main(void)
{
	long a, b, x, y, i, t;
	while(scanf("%ld%ld",&a,&b) != EOF)
	{
		if(a > b)
		{
			t = a;
			a = b;
			b = t;
		}
		x = 0;
		y = 0;
		for (i = a; i <= b; ++i)
		{
			if(i % 2 == 0)
			{
				x += i * i;
			}
			else
			{
				y += i * i * i;
			}
		}
		printf("%ld %ld\n",x,y);
	}
}