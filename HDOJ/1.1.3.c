#include "stdio.h"

void main(void)
{
	int a, b;
	while(scanf("%d%d",&a,&b))
	{
		if (a != 0 || b != 0)
		{
			printf("%d\n",a + b);
		}
		else
		{
			break;
		}
	}
}