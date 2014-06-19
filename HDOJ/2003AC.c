#include "stdio.h"
#include "math.h"

void main(void)
{
	double num;
	while(scanf("%lf",&num) != EOF)
	{
		printf("%.2lf\n",fabs(num));
	}
}