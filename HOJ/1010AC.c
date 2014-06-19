#include "stdio.h"
#include "math.h"

int main(int argc, char const *argv[])
{
	int h, m, t;
	double a, b, c;

	while(scanf("%d%d",&h,&m) && h + m != 0)
	{
		if (h == 12)
		{
			t = 0;
		}
		else
		{
			t = h;
		}
		a = 1.0 * (h * 60 + m) / 720;
		b = 1.0 * m / 60;
		c = fabs(a - b);
		if (c > 0.5)
		{
			c = 1 - c;
		}
		c *= 360;
		printf("At %d:%02d the angle is %.1lf degrees.\n", h,m,c);
	}
	return 0;
}