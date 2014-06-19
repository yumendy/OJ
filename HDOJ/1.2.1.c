#include "stdio.h"

void main(void)
{
	int a, b;
	while(scanf("%x%x",&a,&b)!=EOF)
	{
		printf("%d\n",a + b );
	}
}
