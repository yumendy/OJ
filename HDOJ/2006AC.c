#include "stdio.h"

void main(void)
{
	int n, i;
	int a, sum;
	while(scanf("%d",&n) != EOF)
	{
		sum = 1;
		for (i = 0; i < n; ++i)
		{
			scanf("%d",&a);
			if (a % 2 != 0)
			{
				sum *= a;
			}
			else
			{
				sum *= 1;
			}
		}
		printf("%d\n",sum);
	}
}