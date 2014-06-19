#include <stdio.h>

int main()
{
	int n, m, i, index;
	int a[120], b[120];

	while(1)
	{
		scanf("%d%d",&n,&m);
		index = 0;
		if(n != 0 || m != 0)
		{
			for (i = 0; i < n; ++i)
			{
				scanf("%d",&a[i]);
			}
			if (m >= a[n - 1])
			{
				a[n] = m;
				for (i = 0; i <= n; ++i)
				{
					if (i != n)
					{
						printf("%d ",a[i]);
					}
					else
					{
						printf("%d\n",a[i]);
					}
				}
			}
			else if (m <= a[0])
			{
				b[0] = m;
				for (i = 0; i < n; ++i)
				{
					b[i + 1] = a[i];
				}
				for (i = 0; i <= n; ++i)
				{
					if (i != n)
					{
						printf("%d ",b[i]);
					}
					else
					{
						printf("%d\n",b[i]);
					}
				}
			}
			else
			{
				for (i = 0; i < n; ++i)
				{
					if (m <= a[i])
					{
						index = i;
						break;
					}
				}
				for (i = 0; i < index; ++i)
				{
					b[i] = a[i];
				}
				b[index] = m;
				for (i = index + 1; i <= n; ++i)
				{
					b[i] = a[i - 1];
				}
				for (i = 0; i <= n; ++i)
				{
					if (i != n)
					{
						printf("%d ",b[i]);
					}
					else
					{
						printf("%d\n",b[i]);
					}
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
