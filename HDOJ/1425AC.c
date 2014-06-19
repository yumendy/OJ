#include "stdio.h"
#include "stdlib.h"
#ifndef MAX
#define MAX 1000001
#endif

int a[MAX];

int cmp(const void *a, const void *b)
{
	return *(int *)b - *(int *)a;
}

int main(int argc, char const *argv[])
{
	int m, n, i;
	while(scanf("%d%d",&n,&m) != EOF)
	{
		for (i = 0; i < n; ++i)
		{
			scanf("%d",&a[i]);
		}
		qsort(a,n,sizeof(a[0]),cmp);
		for (i = 0; i < m; ++i)
		{
			if (i == m - 1)
			{
				printf("%d\n", a[i]);
			}
			else
			{
				printf("%d ", a[i]);
			}
		}
	}
	return 0;
}
