#include "stdio.h"

int op(int n)
{
	int sum = 0;
	if (n == 1)
	{
		return 0;
	}
	else if (n % 2 == 1)
	{
		n = 3 * n + 1;
		sum++;
		sum += op(n);
	}
	else if (n % 2 == 0)
	{
		n /= 2;
		sum++;
		sum += op(n);
	}
	return sum;
}

int main(int argc, char const *argv[])
{
	int T, n;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		printf("%d\n", op(n));
	}
	return 0;
}