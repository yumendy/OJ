#include "stdio.h"
#include "stdlib.h"

int cmp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int main(int argc, char const *argv[])
{
	int n, i, flag, j;
	long a[100000], sum;
	while(scanf("%d",&n) && n != 0)
	{
		sum = 0;
		for (i = 0; i < n; ++i)
		{
			scanf("%ld",&a[i]);
		}
		qsort(a,n,sizeof(a[0]),cmp);
		if (a[n - 1] == a[n - 2])
		{
			a[n - 1] = 0;
		}
		else
		{
			sum--;
		}
		for (i = 0; i < n; ++i)
		{
			flag = 0;
			sum++;
			for (j = 0; j < n - 1; ++j)
			{
				if (a[j] != 0 && a[j] != a[j + 1])
				{
					a[j] = 0;
					flag = 1;
				}
			}
			if (!flag)
			{
				break;
			}
		}
		if (n == 1)
		{
			printf("1");
		}
		else
		{
			printf("%ld\n", sum);
		}
		
	}
	return 0;
}