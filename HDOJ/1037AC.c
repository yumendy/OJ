#include "stdio.h"

int main()
{
	int i, a, flag = 0;

	for (i = 0; i < 3; ++i)
	{
		scanf("%d",&a);
		if (a <= 168)
		{
			printf("CRASH %d\n",a);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		printf("NO CRASH\n");
	}
	return 0;
}