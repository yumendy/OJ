#include "stdio.h"

int main(int argc, char const *argv[])
{
	int n;
	double a, b, c, d;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
		printf("%.3lf\n", d / (a + b) * c);
	}
	return 0;
}