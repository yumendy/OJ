#include "stdio.h"

int main()
{
	int n, a, i;
	while(scanf("%d",&n) != EOF && n != 0)
	{
		a = n;
		for (i = 1; i < n; ++i)
		{
			a = a * n % 9;
		}
		if (a == 0)
		{
			printf("9\n");
		}
		else
		{
			printf("%d\n",a);
		}
	}
	return 0;
}