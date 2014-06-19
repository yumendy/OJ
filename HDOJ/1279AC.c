#include "stdio.h"

int main()
{
	int n, m, i, j, flag, a, lst[500];

	scanf("%d",&n);
	for (i = 0; i < n; ++i)
	{
		flag = 0;
		scanf("%d",&a);
		for (j = 0; a > 1; ++j)
		{
			if (a % 2 == 0)
			{
				a /= 2;
			}
			else
			{
				lst[flag] = a;
				a = a * 3 + 1;
				flag++;
			}
		}
		if (flag == 0)
		{
			printf("No number can be output !\n");
		}
		else
		{
			for (j = 0; j < flag - 1; ++j)
			{
				printf("%d ",lst[j]);
			}
			printf("%d\n",lst[flag - 1]);
		}
	}
	return 0;
}