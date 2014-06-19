#include "stdio.h"

double jc(int m)
{
    int sum, i;
	sum = 1.0;
	for (i = m; i >= 1; i--)
	{
		sum *= i;
	}
	return sum;
}

int main ()
{
	double sum;
	int n = 5, i, j;

	printf("n e\n");
	printf("- -----------\n");
	printf("0 1\n");
	printf("1 2\n");
	printf("2 2.5\n");
	printf("3 2.666666667\n");
	printf("4 2.708333333\n");

	for (i = 5; i < 10; ++i)
	{
		sum = 0;
		for (j = 1; j <= i; ++j)
		{
			sum += 1.0 / jc(j);
		}
		printf("%d %.9lf\n",i,sum + 1);
	}
	return 0;
}
