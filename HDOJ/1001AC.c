#include "stdio.h"

void main(void)
{
	long n;
	while(scanf("%ld",&n) != EOF)
	{
		if(n % 2 ==0)
		{
			printf("%ld\n\n",n / 2 * (n + 1));
		}
		else
		{
			printf("%ld\n\n",(n + 1) / 2 * n);
		}
	}
}