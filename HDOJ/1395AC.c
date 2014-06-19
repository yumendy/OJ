#include "stdio.h"


int main()
{
	int x, n, i;

	while(scanf("%d",&n) != EOF)
	{
		if (n % 2 == 0 || n == 1)
		{
			printf("2^? mod %d = 1\n",n);
		}
		else
		{
			x = 0;
			i = 1;
			while(1)
			{
				i = (i % n) * 2;
				x++;
				if (i % n == 1)
				{
					printf("2^%d mod %d = 1\n",x,n);
					break;
				}
			}
		}
	}
	return 0;
}
