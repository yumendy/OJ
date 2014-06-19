#include "stdio.h"

int main()
{
	int n, m, t, i, j, k, a[15], flag;

	scanf("%d",&n);
	for (i = 0; i < n; ++i)
	{
		scanf("%d",&m);
		for (j = 0; j < m; ++j)
		{
			scanf("%d",&a[j]);
		}
		flag = 0;
		for (j = 0; j < m; ++j)
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
		printf("%d\n",a[1]);
	}
	return 0;
}