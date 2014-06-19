#include "stdio.h"
#include "math.h"

void main(void)
{
	int m, n, x, y, s, i, j, a;
	while(scanf("%d%d",&m,&n) != EOF)
	{
		s = 0;
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				scanf("%d",&a);
				if (abs(a) > abs(s))
				{
					s = a;
					x = i + 1;
					y = j + 1;
				}
			}
		}
		printf("%d %d %d\n",x,y,s);
	}
}