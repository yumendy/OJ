#include "stdio.h"

int main(int argc, char const *argv[])
{
	__int64 a, b;

	while(scanf("%I64X%I64X",&a,&b) != EOF)
	{
		if (a + b >= 0)
		{
		printf("%I64X\n", a + b);
		}
		else
		{
			printf("-%I64X\n",-a-b);
		}
	}
	return 0;
}