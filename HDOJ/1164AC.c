#include "stdio.h"
#include "string.h"

void prime(int a[])
{
	int i, j;
	for (i = 0; i < 65535; ++i)
	{
		a[i] = 1;
	}
	a[0] = a[1] = 0;
	for (i = 2; i < 65536; ++i)
	{
		if (a[i])
		{
			for (j = 2 * i; j < 65536; j += i)
			{
				a[j] = 0;
			}
		}
	}
}

int cmp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int main(int argc, char const *argv[])
{
	int n, i, j, primetable[65536], re[1000], m;
	prime(primetable);
	while(scanf("%d",&n) != EOF)
	{
		m = 0;
		while(n > 1)
		{
			for (i = 2; i <= n; ++i)
			{
				if (primetable[i] && (n % i == 0))
				{
					re[m++] = i;
					n /= i;
					break;
				}
			}
		}
		qsort(re,m,sizeof(re[0]),cmp);
		printf("%d", re[0]);
		if (m > 1)
		{
			for (i = 1; i < m; ++i)
			{
				printf("*%d", re[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
