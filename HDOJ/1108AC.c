#include "stdio.h"

int main()
{
	int a, b, m, x, y;

	while(scanf("%d%d",&a,&b) != EOF)
	{
		x = a;
		y = b;
		if (a < b)
		{
			m = a;
			a = b;
			b = m;
		}
		while(1)
		{
			if (a % b == 0)
			{
				m = b;
				break;
			}
			else
			{
				m = a % b;
				a = b;
				b = m;
			}
		}
		printf("%d\n",x / m * y);
	}
	return 0;
}