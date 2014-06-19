#include "stdio.h"

int main()
{
	int n, i, sum;

	scanf("%d",&n);
	while(n--)
	{
		sum = 3;
		scanf("%d",&i);
		while(i--)
		{
			sum--;
			sum *= 2;
		}
		printf("%d\n", sum);
	}
	return 0;
}
