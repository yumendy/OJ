#include "stdio.h"

int main(int argc, char const *argv[])
{
	int m, n, t, i, j, k, flag, a[40];

	scanf("%d",&k);
	while(k--)
	{
		scanf("%d%d",&n,&m);
		for (i = 0; i < n; ++i)
		{
			scanf("%d",&a[i]);
		}
		flag = 0;
		for (i = 0; i < n; ++i)
		{
			for (j = n - 1; j > i; j--)
			{
				if (a[j] < a[j - 1])
				{
					t = a[j];
					a[j] = a[j - 1];
					a[j - 1] = t;
					flag = 1;
				}
			}
			if (!flag)
			{
				break;
			}
			else
			{
				flag = 0;
			}
		}
		printf("%d\n", (100 - a[0]) * (100 - a[0]));
	}
	return 0;
}