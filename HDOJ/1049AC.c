#include "stdio.h"

int main()
{
	int n, u, d, sum;

	while(1)
	{
		scanf("%d%d%d",&n,&u,&d);
		sum = 0;
		if (n != 0)
		{
			while(1)
			{
				n -= u;
				sum++;
				if (n > 0)
				{
					sum++;
					n += d;
				}
				else
				{
					break;
				}
			}
			printf("%d\n",sum);
		}
		else
		{
			break;
		}
	}
	return 0;
}