#include "stdio.h"
#include "ctype.h"

void main(void)
{
	int n, i, j, flag;
	char c[60];

	scanf("%d",&n);
	getchar();
	for (i = 0; i < n; ++i)
	{
		gets(c);
		if (isalpha(c[0]) || c[0] == 95)
		{
			flag = 1;
			for (j = 1;c[j] != '\0'; ++j)
			{
				if ((isalnum(c[j]) || c[j] == 95) == 0)
				{
					flag = 0;
					break;
				}
			}
			if (flag)
			{
				printf("yes\n");
			}
			else
			{
				printf("no\n");
			}
		}
		else
		{
			printf("no\n");
		}
	}
}