#include "stdio.h"
#include "math.h"

int main(int argc, char const *argv[])
{
	int n;
	double a, b, c, d;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
		printf("%.1lf\n", sqrt((a - c) * (a - c) +(b - d) * (b - d)));
	}
	return 0;
}