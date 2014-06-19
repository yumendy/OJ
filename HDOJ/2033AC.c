#include "stdio.h"

int main()
{
	int t, i, a[3], b[3], c[3], ans;

	scanf("%d",&t);
	while(t--)
	{
		for (i = 0; i < 3; ++i)
		{
			scanf("%d",&a[i]);
		}
		for (i = 0; i < 3; ++i)
		{
			scanf("%d",&b[i]);
		}
		ans = 0;
		for (i = 2; i > 0; i--)
		{
			c[i] = ans + ((a[i] + b[i]) % 60);
			ans = (a[i] + b[i]) / 60;
		}
		c[0] = ans + a[0] + b[0];
		printf("%d %d %d\n",c[0],c[1],c[2]);
	}
	return 0;
}
