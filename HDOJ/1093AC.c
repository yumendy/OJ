#include "stdio.h"

void main(void)
{
	int n, m, i, j, a, sum;
	scanf("%d",&n);
	for (i = 0; i < n; ++i)
	{
		sum = 0;
		scanf("%d",&m);
		for (j = 0; j < m; ++j)
		{
			scanf("%d",&a);
			sum += a;
		}
		printf("%d\n",sum);
	}
}
