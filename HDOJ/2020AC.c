#include "stdio.h"
#include "math.h"

int main()
{
	int a[120], m, t;
	int n, i, j, flag = 0;

	while(1)
	{
		scanf("%d",&n);
		if (n != 0)
		{
			for (i = 0; i < n; ++i)
			{
				scanf("%d",&a[i]);
			}
			for (i = 0; i < n - 1; ++i)
			{
				for (j = n - 1; j > i; j--)
				{
					if (abs(a[j]) < abs(a[j - 1]))
					{
						t = a[j - 1];
						a[j - 1] = a[j];
						a[j] = t;
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
			for (i = n - 1; i >= 0; i--)
			{
				if (i != 0)
				{
					printf("%d ",a[i]);
				}
				else
				{
					printf("%d\n",a[i]);
				}
			}
		}
		else
		{
			break;
		}
	}
	return 0;
}