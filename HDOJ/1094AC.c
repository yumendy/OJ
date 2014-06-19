#include "stdio.h"

void main(void)
{
	int n, a, i, sum;
	while(scanf("%d",&n) != EOF)
	{
		sum = 0;
		for (i = 0; i < n; ++i)
		{
			scanf("%d",&a);
			sum += a;
		}
		printf("%d\n",sum);
	}
}