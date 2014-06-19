#include "stdio.h"

int main()
{
	int n, k, i, flag;
	double a[2][200], c, s;
	char name[50];

	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&k);
		flag = 0;
		for (i = 0; i < k; ++i)
		{
			scanf("%s%lf%lf",&name,&a[0][i],&a[1][i]);
			if (a[1][i] < 60)
			{
				flag = 1;
			}
		}
		if (flag)
		{
			printf("Sorry!\n");
		}
		else
		{
			s = c = 0;
			for (i = 0; i < k; ++i)
			{
				c += a[0][i];
				s += (a[1][i] * a[0][i]);
			}
			printf("%.2lf\n",s / c);
		}
		if (n != 0)
		{
			printf("\n");
		}
	}
	return 0;
}