#include "stdio.h"
#include "math.h"

void main(void)
{
	int m, n, i, j;
	float a, sum;

	scanf("%d",&m);
	for (i = 0; i < m; ++i)
	{
		sum = 0;
		scanf("%d",&n);
		for (j = 1; j <= n; ++j)
		{
			if (j % 2 != 0)
			{
				sum += 1.0 / j;
			}
			else
			{
				sum -= 1.0 / j;
			}
		}
		printf("%.2f\n",sum);
	}
}