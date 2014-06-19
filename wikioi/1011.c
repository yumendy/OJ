#include "stdio.h"

int cel(int n)
{
	int sum = 0, i;
	if (n == 1)
	{
		return 0;
	}
	else
	{
		sum += (n / 2);
		for (i = 1; i <= n / 2; ++i)
		{
			sum += cel(i);
		}
	}
	return sum;
}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	printf("%d\n", cel(n) + 1);
	return 0;
}