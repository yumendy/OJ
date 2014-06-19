#include "stdio.h"
#include "math.h"
#ifndef PI
#define PI 3.14159265
#endif

int main()
{
	double x1, y1, x2, y2, a, b, c, t;
	int n;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
		c = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
		a = sqrt(x1 * x1 + y1 * y1);
		b = sqrt(x2 * x2 + y2 * y2);
		t = -1 * (c * c - a * a - b * b) / (2 * a * b);
		t = acos(t);
		printf("%.2lf\n",t * 180.0 / PI);
	}
	return 0;
}
