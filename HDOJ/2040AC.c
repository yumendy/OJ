#include "stdio.h"

int S(int num)
{
	int i, sum;
	sum = 0;
	for (i = 1; i < num; ++i)
	{
		if (num % i == 0)
		{
			sum += i;
		}
	}
	return sum;
}

int main(int argc, char const *argv[])
{
	int n, a, b, t;

	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&a,&b);
		if (S(a) == b && S(b) == a)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}