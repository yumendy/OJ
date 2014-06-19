#include "stdio.h"

int main()
{
	int n, i, j, m, sum, t;

	while(1)
	{
		m = 0;
		sum = 0;
		scanf("%d",&n);
		if (n != 0)
		{
			for (i = 0; i < n; ++i)
			{
				scanf("%d",&t);
				if (t > m)
				{
					sum += 6 * (t - m);
					sum += 5;
				}
				else
				{
					sum += 4 * (m - t);
					sum += 5;
				}
				m = t;
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