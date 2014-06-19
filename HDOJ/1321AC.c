#include "stdio.h"
#include "string.h"

void main(void)
{
	int n, i, j, l;
	char a[75];

	scanf("%d",&n);
	getchar();
	for (i = 0; i < n; ++i)
	{
		gets(a);
		l = strlen(a);
		for (j = l - 1; j >= 0; j--)
		{
			printf("%c",a[j]);
		}
		printf("\n");
	}
}