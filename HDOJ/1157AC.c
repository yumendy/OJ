#include "stdio.h"

int main()
{
	int n, i, j, t, a[10000], flag;

	while(scanf("%d",&n) != EOF)
	{
		for (i = 0; i < n; ++i)
		{
			scanf("%d",&a[i]);
		}
		flag = 0;
		for (i = 0; i < n; ++i)
		{
			for (j = n - 1; i < j; j--)
			{
				if (a[j] < a[j - 1])
				{
					t = a[j];
					a[j] = a[j - 1];
					a[j - 1] = t;
					flag = 1;
				}
			}
			if (flag == 0)
			{
				break;
			}
			else
			{
				flag = 0;
			}
		}
		printf("%d\n",a[(n - 1) / 2]);
	}
	return 0;
}