#include "stdio.h"
#include "stdlib.h"

int cmp(const void *a, const void *b)
{
	return (*(int*)a - *(int*)b);
}

int main(int argc, char const *argv[])
{
	int a[100000], i, j, t, flag, n;
	scanf("%d",&n);
	for (i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	qsort(a,n,sizeof(a[0]),cmp);
	for (i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	return 0;
}