#include "stdio.h"
#include "ctype.h"

void main(void)
{
	int n, i, j, sum;
	char str[1000], c;

	scanf("%d",&n);
	getchar();
	for (i = 0; i < n; ++i)
	{
		sum = 0;
		gets(str);
		for (j = 0;(c = str[j]) != '\0'; ++j)
		{
			if (isdigit(c))
			{
				sum += 1;
			}
		}
		printf("%d\n",sum);
	}
}