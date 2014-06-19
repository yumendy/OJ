#include "stdio.h"

int main(int argc, char const *argv[])
{
	int n, m, a[105], sum, i, flag, j, t;

	while(scanf("%d",&n) != EOF && n != 0)
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
		sum = 0;
		t = n / 2 + 1;
		for (i = 0; i < t; ++i)
		{
			sum += (a[i] / 2 + 1);
		}
		printf("%d\n", sum);
	}
	return 0;
}
