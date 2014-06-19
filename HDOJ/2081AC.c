#include "stdio.h"

int main()
{
	int i, n;
	char a[5];
	scanf("%d",&n);
	for (i = 0; i < n; ++i)
	{
		scanf("%*6s%s",a);
		printf("6%s\n",a);
	}
	return 0;
}