#include "stdio.h"

int main()
{
	int n, i, sum, first = 1;
	long long a;

	while(scanf("%I64d",&a) != EOF)
	{
		sum = 0;
		while(a > 0)
		{
			n = a % 10;
			if (n % 2 == 0)
			{
				sum += n;
			}
			a /= 10;
		}
		if (first == 1)
		{
			printf("%d\n",sum);
			first = 0;
		}
		else
		{
			printf("\n");
			printf("%d\n",sum);
		}
	}
	return 0;
}