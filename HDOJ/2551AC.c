#include "stdio.h"

int main(int argc, char const *argv[])
{
	int n, i;
	long x, sum;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%ld",&x);
		sum = 0;
		for (i = 1;; i++)
		{
			sum += i * i * i;
			if (sum >= x)
			{
				printf("%d\n", i);
				break;
			}
		}
	}
	return 0;
}