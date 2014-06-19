#include "stdio.h"

void main(void)
{
	int n, m, i, j, a, sum;
	scanf("%d",&n);
	for (i = 0; i < n; ++i)
	{
		scanf("%d",&m);
		sum = 0;
		for (j = 0; j < m; ++j)
		{
			scanf("%d",&a);
			sum += a;
		}
		if(i != n - 1)
		{
			printf("%d\n\n",sum);
		}
		else
		{
			printf("%d\n",sum);
		}
	}
}