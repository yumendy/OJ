#include "stdio.h"


void main(void)
{
	int a[35][35];
	int i, j, n;

	a[1][1] = 1;
	for (i = 2; i <= 32; ++i)
	{
		for (j = 1; j <= i; ++j)
		{
			if (j == 1 || j == i)
			{
				a[i][j] = 1;
			}
			else
			{
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			}
		}
	}
	while(scanf("%d",&n) != EOF)
	{
		for (i = 1; i <= n; ++i)
		{
			for (j = 1; j <= i; ++j)
			{
				if (j != i)
				{
					printf("%d ",a[i][j]);
				}
				else
				{
					printf("%d\n",a[i][j]);
				}
			}
		}
		printf("\n");
	}
}