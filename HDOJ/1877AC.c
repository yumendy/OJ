#include "stdio.h"

int main()
{
	int m, l[1001], i;
	long a, b, c;

	while(scanf("%d",&m) && m != 0)
	{
		scanf("%ld%ld",&a,&b);
		c = a + b;
		memset(l,0,sizeof(l));
		for (i = 0; c > 0; i++)
		{
			l[i] = c % m;
			c /= m;
		}
		i--;
		for (;i > 0 ; i--)
		{
			printf("%d",l[i]);
		}
		printf("%d\n",l[0]);
	}
	return 0;
}
