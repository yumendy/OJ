#include "stdio.h"

int jc(int n)
{
	int sum, i;
	sum = 1;
	for (i = 2; i <= n; ++i)
	{
		sum *= i;
	}
	return sum;
}

int main(int argc, char const *argv[])
{
	int i, j, t, a;
	int sum;
	for (i = 1; i <= 41000; i++)
	{
		sum = 0;
		a = i;
		while(a > 0)
		{
			t = a % 10;
			a /= 10;
			sum += jc(t);
		}
		if (sum == i)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}