#include "stdio.h"

int main()
{
	__int64 a, b, n;

	while(scanf("%I64d",&n) != EOF)
	{
		n %= 10000;
		a = (1 + n) * n / 2;
		a %= 10000;
		b = a * a % 10000;
		printf("%04I64d\n", b);
	}
	return 0;
}