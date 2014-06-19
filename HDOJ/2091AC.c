#include "stdio.h"

void main (void)
{
	int n, i, j, t = 1;
	char c;

	while(1)
	{
		n = 0;
		scanf("%c",&c);
		if (c != '@')
		{
			if (t == 0)
			{
				printf("\n");
			}
			t = 0;
			scanf("%d",&n);
			getchar();
			for (i = 1; i <= n; ++i)
			{
				if (i == 1)
				{
					for (j = 0; j < n - 1; ++j)
					{
						printf(" ");
					}
					printf("%c\n",c);
				}
				else if (i == n)
				{
					for (j = 0; j < 2 * n - 1; ++j)
					{
						printf("%c",c);
					}
					putchar('\n');
				}
				else
				{
					for (j = 0; j < n - i; ++j)
					{
						printf(" ");
					}
					printf("%c",c);
					for (j = 0; j < 2 * i - 3; ++j)
					{
						printf(" ");
					}
					printf("%c\n",c);
				}
			}
		}
		else
		{
			break;
		}
	}
}
