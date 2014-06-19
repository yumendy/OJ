#include "stdio.h"

int main()
{
	long id, s;
	int m, n, i, j, t, len, k, flag, a[1005], b[1005];

	while(scanf("%ld",&id) != EOF)
	{
		len = 0;
		while(1)
		{
			scanf("%ld%d",&s,&m);
			if (s != 0 || m != 0)
			{
				a[len] = m;
				len++;
				if (s == id)
				{
					n = m;
				}
			}
			else
			{
				break;
			}
		}
		flag = 0;
		for (i = 0; i < len; ++i)
		{
			for (j = len - 1; j > i; j--)
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
		b[0] = 0;
		for (i = len - 1; i >= 0; i--)
		{
			k = len - i;
			b[k] = a[i];
		}
		for (i = 1; i <= len; ++i)
		{
			if (b[i] == n)
			{
				printf("%d\n",i);
				break;
			}
		}
	}
	return 0;
}