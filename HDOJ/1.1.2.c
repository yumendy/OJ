#include "stdio.h"

void main(void)
{
	int a, b, n, i;
	scanf("%d",&n);
	for(i = 0;i < n;i++)
	{
		scanf("%d%d",&a,&b);
		printf("%d\n",a + b);
	}
}
