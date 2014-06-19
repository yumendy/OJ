#include "stdio.h"

int main()
{
	int n, m, i, p1, p2, p3, p4, p5, p6, sum;
	while(1)
	{
		scanf("%d",&n);
		if (n != 0)
		{
			sum = 0;
			for (i = 0; i < n; ++i)
			{
				p1 = p2 = p3 = p4 = p5 = p6 = 0;
				scanf("%d",&m);
				p1 = m / 100;
				m -= 100 * p1;
				p2 = m / 50;
				m -= 50 * p2;
				p3 = m / 10;
				m -= 10 * p3;
				p4 = m / 5;
				m -= 5 * p4;
				p5 = m / 2;
				m -= 2 * p5;
				p6 = m;
				sum += (p1 + p2 + p3 + p4 + p5 + p6);
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
