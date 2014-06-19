#include "stdio.h"
#define PI 3.1415927

void main(void)
{
	double r;
	while(scanf("%lf",&r) != EOF)
	{
		printf("%.3lf\n",4.0 / 3 * PI * r * r * r);
	}
}