#include "stdio.h"
#include "math.h"

int main(int argc, char const *argv[])
{
	int n, h, m, s;
	double out, a, b;

	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d%d",&h,&m,&s);
		if (h >= 12)
		{
			h -= 12;
		}
		a = 3600 * h + 60 * m + s;
		b = 60 * m + s;
		out = fabs(1.0 * a / 43200 - 1.0 * b /3600);
		if (out > 0.5)
		{
			out = 1 - out;
		}
		out *= 360;
		out = floor(out);
		printf("%.0lf\n", out);
	}
	return 0;
}