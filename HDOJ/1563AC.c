#include "stdio.h"

int main()
{
	int a[200], n, i, j, m, k;
	while(scanf("%d",&n) && n != 0)
	{
		for (i = 0; i < n; ++i)
		{
			scanf("%d",&a[i]);
		}
		for (i = 0; i < n; ++i)
		{
			k = 0;
			for (j = 0; j < n; ++j)
			{
				if (a[j] == a[i])
				{
					k++;
				}
				if (k > 1)
				{
					break;
				}
			}
			if (k == 1)
			{
				printf("%d\n",a[i]);
				break;
			}
		}
	}
	return 0;
}
