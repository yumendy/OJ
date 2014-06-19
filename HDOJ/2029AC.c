#include "stdio.h"
#include "string.h"

int main ()
{
	int n, i, j, l;
	char s[100], b[100];

	scanf("%d",&n);
	for (i = 0; i < n; ++i)
	{
		scanf("%s",s);
		l = strlen(s);
		for (j = 0; j < l; ++j)
		{
			b[j] = s[l - 1 - j];
		}
		b[l] = '\0';
		if (strcmp(s,b) == 0)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	}
	return 0;
}