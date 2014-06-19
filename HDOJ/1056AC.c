#include "stdio.h"

int main(int argc, char const *argv[])
{
	int i;
	double a, sum;

	while(scanf("%lf",&a) && a != 0.00)
	{
		sum = 0;
		for (i = 2; sum < a; ++i)
		{
			sum += (1.0 / i);
		}
		printf("%d card(s)\n",i - 2);
	}
	return 0;
}