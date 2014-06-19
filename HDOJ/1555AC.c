#include "stdio.h"

int main()
{
	int m, k, t, sum;

	while(1)
	{
		scanf("%d%d",&m,&k);
		if (m != 0 || k != 0)
		{
			sum = 0;
			while(1)
			{
				t = m / k;
				m -= (k * t);
				m += t;
				sum += k * t;
				if (m < k)
				{
					break;
				}
			}
			sum += m;
			printf("%d\n",sum);
		}
		else
		{
			break;
		}
	}
	return 0;
}