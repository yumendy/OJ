#include "stdio.h"

int main(int argc, char const *argv[])
{
	int i, j, sum, n, t;
	sum = 0;
	i = 0;
	scanf("%d",&n);
	while(sum < n)
	{
		i++;
		sum += i;
	}
	if (i % 2 == 1)
	{
		printf("%d/%d\n", sum - n + 1, n + i - sum);
	}
	else
	{
		printf("%d/%d\n", n + i - sum,sum - n + 1);
	}
	return 0;
}