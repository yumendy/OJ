#include "stdio.h"

int main(int argc, char const *argv[])
{
	int t, n, x;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d", &n)；
		x = n % 10;
		for (i = 0; i < n; ++i)
		{
			x *= x;
			x %= 10;
		}
		printf("%d\n", x);
	}
	return 0;
}