#include "stdio.h"

int main(int argc, char const *argv[])
{
	int c, i, j, n;

	scanf("%d",&c);
	while(c--)
	{
		scanf("%d",&n);
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < n; j++)
			{
				printf("%d ",i * j);
			}
			printf("%d\n",i * j);
		}
	}
	return 0;
}