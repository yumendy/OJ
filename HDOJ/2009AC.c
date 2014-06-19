#include "stdio.h"
#include "math.h"

void main(void)
{
	int n, i;
	double m, a, sum;
	sum = 0;
	while(scanf("%lf%d",&m,&n) != EOF)
	{
		sum = 0;
		for (i = 0; i < n; ++i)
		{
			sum += m;
			a = sqrt(m);
			m = a;
		}
		printf("%.2lf\n",sum);
	}
}
