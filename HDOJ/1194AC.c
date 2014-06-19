#include "stdio.h"

int main()
{
	int a, b, y, n, i;

	scanf("%d",&n);
	for (i = 0; i < n; ++i)
	{
		scanf("%d%d",&a,&b);
		y = a - b;
		if (y < 0 || y % 2 != 0)
		{
			printf("impossible\n");
		}
		else
		{
			printf("%d %d\n",a - y / 2,y / 2);
		}
	}
	return 0;
}