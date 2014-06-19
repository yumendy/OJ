#include "stdio.h"

void main(void)
{
	int year(y);
	int y, m, d, i, sum;
	int a[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int b[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
	while(scanf("%d/%d/%d",&y,&m,&d) != EOF)
	{
		if (year(y) == 0)
		{
			sum = 0;
			for (i = 0; i < m; ++i)
			{
				sum += a[i];
			}
		}
		else
		{
			sum = 0;
			for (i = 0; i < m; ++i)
			{
				sum += b[i];
			}
		}
		printf("%d\n",sum + d);
	}

}

int year(y)
{
	if(y % 100 != 0)
	{
		if(y % 4 == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (y % 400 == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}