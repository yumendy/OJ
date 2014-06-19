#include "stdio.h"

int main()
{
	int i;
	float sum, a;
	sum = 0.0;
	for (i = 0; i < 12; ++i)
	{
		scanf("%f",&a);
		sum += a;
	}
	printf("$%.2f\n",sum / 12.0);
	return 0;
}