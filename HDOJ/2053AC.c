#include "stdio.h"

int main(int argc, char const *argv[])
{
	int s, n, i;

	while(scanf("%d",&n) != EOF)
	{
		s = 0;
		for (i = 1; i <= n; ++i)
		{
			if (n % i == 0)
			{
				s = !s;
			}
		}
		printf("%d\n",s);
	}
	return 0;
}