#include "stdio.h"
#include "string.h"

int main()
{
	int n, i, j, m;
	char a[60], b[60];

	scanf("%d",&n);
	for (i = 0; i < n; ++i)
	{
		scanf("%s",a);
		scanf("%s",b);
		m = strlen(a);
		for (j = 0; j < m / 2; ++j)
		{
			printf("%c",a[j]);
		}
		printf("%s",b);
		for (j = m / 2; j < m; ++j)
		{
			printf("%c",a[j]);
		}
		printf("\n");
	}
	return 0;
}