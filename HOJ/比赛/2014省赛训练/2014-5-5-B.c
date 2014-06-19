#include "stdio.h"
#include "stdlib.h"
#include "string.h"
 
int cmp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int main(int argc, char const *argv[])
{
	int num[100], n, m, i;
	char a[200];
	while(scanf("%s",a) != EOF)
	{
		n = strlen(a);
		m = 0;
		for (i = 0; i < n; ++i)
		{
			if (a[i] != '+')
			{
				num[m++] = a[i] - '0';
			}
		}
		qsort(num,m,sizeof(int),cmp);
		if (m < 1)
		{
			printf("%d\n", num[0]);
		}
		else
		{
			printf("%d", num[0]);
			for (i = 1; i < m; ++i)
			{
				printf("+%d", num[i]);
			}
			printf("\n");
		}
	}
	return 0;
}