#include "stdio.h"

void main(void)
{
	int n, i, j;
	char a[55], b[55];

	scanf("%d",&n);

	for (i = 0; i < n; ++i)
	{
		scanf("%s",&a);
		printf("String #%d\n",i + 1);
		for (j = 0; a[j] != '\0'; ++j)
		{
			if (a[j] != 90)
			{
				printf("%c",a[j] + 1);
			}
			else
			{
				printf("A");
			}
		}
		printf("\n\n");

	}
}