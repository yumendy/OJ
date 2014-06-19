#include "stdio.h"

int main()
{
	int n, k, i, j, flag;
	double t, a[105];

	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&k);
		for (i = 0; i < k; ++i)
		{
			scanf("%lf",&a[i]);
		}
		flag = 0;
		for (i = 0; i < k; ++i)
		{
			for (j = k - 1; i < j; j--)
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
		printf("%.2lf\n",a[k - 1]);
	}
	return 0;
}
