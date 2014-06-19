#include "stdio.h"
#define N 5

int count(int *p)
{
	int i, sum = 0;
	for (i = 0; i < N; ++i)
	{
		if (*(p + i) % 2 == 0)
		{
			sum += 1;
		}
	}
	return sum;
}

int main(int argc, char const *argv[])
{
	int a[N], i;
	int *p = &a[0];
	for (i = 0; i < N; ++i)
	{
		scanf("%d", p + i);
	}
	printf("%d\n", count(p));
	return 0;
}