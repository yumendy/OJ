#include "stdio.h"

int main(int argc, char const *argv[])
{
	int a[1001], i, n, sum, t;
	for (i = 0; i <= 1000; ++i)
	{
		a[i] = 0;
	}
	scanf("%d",&n);
	for (i = 0; i < n; ++i)
	{
		scanf("%d",&t);
		a[t] = 1;
	}
	sum = 0;
	for (i = 0; i < 1001; ++i)
	{
		if (a[i])
		{
			sum += 1;
		}
	}
	printf("%d\n", sum);
	for (i = 0; i < 1001; ++i)
	{
		if (a[i])
		{
			printf("%d ", i);
		}
	}
	return 0;
}