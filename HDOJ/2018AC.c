#include "stdio.h"

void main(void)
{
	double a[55]; 
	int n, i;
	while(scanf("%d",&n) != EOF && n != 0)
	{
		a[0] = 0;
		a[1] = 1;
		a[2] = 2;
		a[3] = 3;
		for (i = 4; i <= n; ++i)
		{
			a[i] = a[i - 1] + a[i - 3];
		}
		printf("%.0lf\n",a[n]);
	}
}
