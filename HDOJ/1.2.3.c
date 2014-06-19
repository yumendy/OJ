#include "stdio.h"

void main(void)
{
	float a, sum;
	int i;
	sum = 0;
	for (i = 0; i < 12; ++i)
	{
		scanf("%f",&a);
		sum += a;
	}
	printf("$%.2f\n",sum / 12);
}