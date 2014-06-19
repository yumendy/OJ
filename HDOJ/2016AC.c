#include "stdio.h"

void main(void)
{
	int min, index, t, n, i;
	int num[100], b[100];
	while(1)
	{
		scanf("%d",&n);
		if (n != 0)
		{
			for (i = 0; i < n; ++i)
			{
				scanf("%d",&num[i]);
			}
			t = min = num[0];
			index = 0;
			for (i = 1; i < n; ++i)
			{
				if (num[i] < min)
				{
					index = i;
					min = num[i];
				}
			}
			if (index == 0)
			{
				for (i = 0; i < n; ++i)
				{
					if (i == n - 1)
					{
						printf("%d\n",num[i]);
					}
					else
					{
						printf("%d ",num[i]);
					}
				}
			}
			else
			{
				b[0] = min;
				for (i = 1; i < index; ++i)
				{
					b[i] = num[i];
				}
				b[index] = num[0];
				if (index != n - 1)
				{
					for (i = index + 1; i < n; ++i)
					{
						b[i] = num[i];
					}
				}
				for (i = 0; i < n; ++i)
				{
					if (i == n - 1)
					{
						printf("%d\n",b[i]);
					}
					else
					{
						printf("%d ",b[i]);
					}
				}
			}
		}
		else
		{
			break;
		}
	}
}