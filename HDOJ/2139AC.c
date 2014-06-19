#include "stdio.h"

int main(int argc, char const *argv[])
{
	__int64 n;

	while(scanf("%I64d",&n) != EOF)
	{
		printf("%I64d\n", n * (n + 1) * (n + 2) / 6);
	}
	return 0;
}