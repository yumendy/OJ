#include "stdio.h"

int main()
{
	int n, i, y;
	double a, b, year;

	scanf("%d",&n);
	for (i = 1; i <= n; ++i)
	{
		scanf("%lf%lf",&a,&b);
		year = (a*a + b*b) * 3.1415926 / 100;
		y = (int)(year + 1);
		printf("Property %d: This property will begin eroding in year %d.\n",i,y);
	}
	printf("END OF OUTPUT.\n");
	return 0;
}