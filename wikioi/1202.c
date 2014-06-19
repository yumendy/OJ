#include "stdio.h"

int main(int argc, char const *argv[])
{
	int n, i, sum = 0, t;
	scanf("%d",&n);
	for (i = 0; i < n; ++i)
	{
		scanf("%d",&t);
		sum += t;
	}
	printf("%d\n", sum);
	return 0;
}