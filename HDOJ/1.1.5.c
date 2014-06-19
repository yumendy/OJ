#include "stdio.h"

void main(void)
{
	int n, a, m, sum, i, j;
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
		printf("%d\n", sum);
	}
}
