#include "stdio.h"

void main(void)
{
	float m;
	int a, b, c, n, i;

	while(1)
	{
		scanf("%d",&n);
		if(n != 0)
		{
			a = 0;
			b = 0;
			c = 0;
			for (i = 0; i < n; ++i)
			{
				scanf("%f",&m);
				if(m < 0)
				{
					a += 1;
				}
				else if(m == 0)
				{
					b += 1;
				}
				else
				{
					c += 1;
				}
			}
			printf("%d %d %d\n",a,b,c);
		}
		else
		{
			break;
		}
	}
}