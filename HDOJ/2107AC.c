#include "stdio.h"

int main(int argc, char const *argv[])
{
	long n, a, m;

	while(scanf("%ld",&n) && n != 0)
	{
		m = 0;
		while(n--)
		{
			scanf("%ld",&a);
			if (a > m)
			{
				m = a;
			}
		}
		printf("%ld\n", m);
	}
	return 0;
}
