#include "stdio.h"

int main(int argc, char const *argv[])
{
	int n, m, i, j, k, t, flag, a[1005];

	scanf("%d",&n);
	for (i = 0; i < n; ++i)
	{
		scanf("%d",&m);
		for (j = 0; j < m; ++j)
		{
			scanf("%d",&a[j]);
		}
		flag = 0;
		for (j = 0; j < m - 1; ++j)
		{
			for (k = m - 1; j < k; k--)
			{
				if (a[k] < a[k - 1])
				{
					t = a[k];
					a[k] = a[k - 1];
					a[k - 1] = t;
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
		for (j = 0; j < m; ++j)
		{
			if (j != m - 1)
			{
				printf("%d ",a[j]);
			}
			else
			{
				printf("%d\n",a[j]);
			}
		}
	}
	return 0;
}