#include "stdio.h"
#include "math.h"

void main(void)
{
	int n;
	while(scanf("%d",&n) != EOF)
	{
		(double)n;
		printf("%.0lf\n",1.5 * pow(2,n) - 2);
	}
}