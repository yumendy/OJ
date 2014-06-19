#include "stdio.h"

void main (void)
{
	double n, p, sum;
	char c[100];

	sum = 0.0;
	while(scanf("%s%lf%lf",&c,&n,&p) != EOF)
	{
		sum += 1.0 * n * p;
	}
	printf("%.1lf\n",sum);
}
