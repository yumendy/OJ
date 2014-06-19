#include "stdio.h"

void main(void)
{
	int min, max, n, sum, a, i;

	while(scanf("%d",&n) != EOF)
	{
		scanf("%d",&a);
		min = a;
		max = a;
		sum = a;
		for (i = 0; i < n - 1; ++i)
		{
			scanf("%d",&a);
			sum += a;
			if(a < min)
			{
				min = a;
			}
			else if (a > max)
			{
				max = a;
			}
		}
		sum = sum - min - max;
		printf("%.2f\n",sum / (n - 2.0));
	}
}