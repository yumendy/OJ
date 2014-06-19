#include "stdio.h"

int main(int argc, char const *argv[])
{
	int n, a[105], b[105], i, j, t, flag, x, y;

	while(scanf("%d",&n) && n)
	{
		for (i = 0; i < n; ++i)
		{
			scanf("%d",&a[i]);
		}
		for (i = 0; i < n; ++i)
		{
			scanf("%d",&b[i]);
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
			if (!flag)
			{
				break;
			}
			else
			{
				flag = 0;
			}
		}
		flag = 0;
		for (i = 0; i < n; ++i)
		{
			for (j = n - 1; i < j; j--)
			{
				if (b[j] < b[j - 1])
				{
					t = b[j];
					b[j] = b[j - 1];
					b[j - 1] = t;
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
		x = y = 0;
		for (i = 0; i < n; ++i)
		{
			if (a[i] > b[i])
			{
				x += 2;
			}
			else if (a[i] == b[i])
			{
				x++;
				y++;
			}
			else
			{
				y += 2;
			}
		}
		printf("%d vs %d\n",x,y);
	}
	return 0;
}