#include "stdio.h"
#include "math.h"

int main(int argc, char const *argv[])
{
	float s, u, v;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%f%f",&s,&u);
		v = 1.0 / (tan(atan(1.0 / s) - atan(1.0 / u)));
		printf("%.0f\n", v * u - s * u - s * v);
	}
	return 0;
}
