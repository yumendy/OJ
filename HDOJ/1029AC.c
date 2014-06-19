#include "stdio.h"

int a[1000000];

int main()
{
	int n, i, m, flag = 1;

	while(scanf("%d",&n) != EOF)
	{
		flag = 1;
		memset(a,0,sizeof(a));
		for (i = 1; i < (n + 1) / 2; ++i)
		{
			scanf("%d",&m);
			a[m] += 1;
		}
		for (i = (n + 1) / 2; i <= n; ++i)
		{
			scanf("%d",&m);
			a[m] += 1;
			if (flag)
			{
				if (a[m] >= (n + 1) / 2)
				{
					printf("%d\n",m);
					flag = 0;
				}
			}
		}
	}
	return 0;
}