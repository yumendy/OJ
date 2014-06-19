#include "stdio.h"

void main (void)
{
	int n, i, m, j;
	char s[10000];

	scanf("%d",&n);
	getchar();
	for (i = 0; i < n; ++i)
	{
		gets(s);
		m = 0;
		for (j = 0; s[j] != '\0'; ++j)
		{
			if (s[j] < 0)
			{
				m++;
			}
		}
		printf("%d\n",m / 2);
	}
}