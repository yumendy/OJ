#include "stdio.h"

int main()
{
	int a, b, i, m, l[100];
	while(scanf("%d%d",&a,&b) && (a != 0 || b != 0))
	{
		a *= 100;
		m = 0;
		for (i = 0; i < 100; ++i)
		{
			if ((a + i) % b == 0)
			{
				l[m] = i;
				m++;
			}
		}
		for (i = 0; i < m - 1; ++i)
		{
			printf("%02d ",l[i]);
		}
		printf("%02d\n", l[m - 1]);
	}
	return 0;
}
