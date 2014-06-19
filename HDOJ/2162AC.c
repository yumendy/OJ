#include "stdio.h"

int main(int argc, char const *argv[])
{
	int n, i, sum, a, t;

	a = 0;
	while(scanf("%d",&n) && n > 0)
	{
		a++;
		sum = 0;
		while(n--)
		{
			scanf("%d",&t);
			sum += t;
		}
		printf("Sum of #%d is %d\n", a,sum);
	}
	return 0;
}