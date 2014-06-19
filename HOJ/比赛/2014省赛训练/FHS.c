#include "stdio.h"
#include "string.h"

int cmp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int main(int argc, char const *argv[])
{
	int T,n, a[3000], i;
	char type[10];
	scanf("%d",&T);
	while(T--)
	{
		scanf("%s",type);
		if (!strcmp(type,"Faster"))
		{
			scanf("%d",&n);
			for (i = 0; i < n; ++i)
			{
				scanf("%d",&a[i]);
			}
			qsort(a,n,sizeof(a[0]),cmp);
			printf("%d\n", a[0]);
		}
		else
		{
			scanf("%d",&n);
			for (i = 0; i < n; ++i)
			{
				scanf("%d",&a[i]);
			}
			qsort(a,n,sizeof(a[0]),cmp);
			printf("%d\n", a[n - 1]);
		}
	}
	return 0;
}
