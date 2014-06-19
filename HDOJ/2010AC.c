#include "stdio.h"

void main(void)
{
	int m, n, i, j, x, y, z;
	int a[4];
	while(scanf("%d%d",&m,&n) != EOF)
	{
		j = 0;
		for (i = m; i <= n; ++i)
		{
			x = i / 100;
			y = i / 10 - 10 * x;
			z = i % 10;
			if(x * x * x + y * y * y + z * z * z == i)
			{
				a[j] = i;
				j += 1;
			}
		}
		if (j == 0)
		{
			printf("no\n");
		}
		else
		{
			for (i = 0; i < j; ++i)
			{
				if(i != j - 1)
				{
					printf("%d ",a[i]);
				}
				else
				{
					printf("%d\n",a[i]);
				}
			}
		}
	}
}
