#include "stdio.h"

int main()
{
	int t, q;
	double y, e, g, f, temp;

	scanf("%d",&t);
	while(t--)
	{
		scanf("%lf%d%lf%lf%lf",&y,&q,&e,&f,&g);
		temp = y * (1 + e / 100 * q / 365);
		printf("%.1lf\n",temp * (1 + g / 100));
		printf("%.1lf\n",y * (1 + f / 100 * (q + 365) / 365));
	}
	return 0;
}
