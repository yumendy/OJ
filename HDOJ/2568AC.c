#include "stdio.h"

int main()
{
	int n, m, i, sum;

	scanf("%d",&n);
	for (i = 0; i < n; ++i)
	{
		sum = 0;
		scanf("%d",&m);
		while(m != 0)
		{
			if (m % 2 == 0)
			{
				m /= 2;
			}
			else
			{
				m -= 1;
				sum += 1;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}