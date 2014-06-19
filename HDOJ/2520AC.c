#include "stdio.h"

int main(int argc, char const *argv[])
{
	__int64 sum, n;
	int c;

	scanf("%d",&c);
	while(c--)
	{
		scanf("%I64d",&n);
		printf("%I64d\n", n * n % 10000);
	}

	return 0;
}