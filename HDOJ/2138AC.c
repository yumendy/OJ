#include "stdio.h"
#include "math.h"

int main(int argc, char const *argv[])
{
	__int64 n, i, j, t, a, sum, f;

	while(scanf("%I64d",&n) != EOF)
	{
		sum = 0;
		while(n--)
		{
			scanf("%I64d",&a);
			f = 1;
			t = sqrt(a) + 1;
			if (a == 2)
			{
				sum++;
			}
			for (i = 2; i <= t; i++)
			{
				if (a % i == 0)
				{
					f = 0;
					break;
				}
			}
			if (f)
			{
				sum++;
			}
		}
		printf("%I64d\n", sum);
	}
	return 0;
}
