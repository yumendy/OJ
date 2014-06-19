#include "stdio.h"
#include "math.h"
void main(void)
{
	double x1, y1, x2, y2;
	double d;
	while(scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2) != EOF)
	{
		d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
		printf("%.2lf\n",d);
	}
}
