#include "stdio.h"

void main(void)
{
	int n, i, j, sum, a;
	int lst[1005];

	while(1)
	{
		scanf("%d",&n);
		if (n != 0)
		{
			for (i = 0; i < n; ++i)
			{
				scanf("%d",&lst[i]);
			}
			scanf("%d",&a);
			sum = 0;
			for (i = 0; i < n; ++i)
			{
				if (lst[i] == a)
				{
					sum++;
				}
			}
			printf("%d\n",sum);
		}
		else
		{
			break;
		}
	}
}