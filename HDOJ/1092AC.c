#include "stdio.h"

void main(void)
{
	int n, i, a, sum;
	while(1)
	{
		scanf("%d",&n);
		if(n != 0)
		{
			sum = 0;
			for (i = 0; i < n; ++i)
			{
				scanf("%d",&a);
				sum += a;
			}
			printf("%d\n",sum);
		}
		else
		{
			break;
		}
	}
}