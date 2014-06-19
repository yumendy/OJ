#include "stdio.h"
#include "string.h"
#include "ctype.h"

int main(int argc, char const *argv[])
{
	int T, n, i;
	char a[1000];
	scanf("%d",&T);
	getchar();
	while(T--)
	{
		gets(a);
		n = strlen(a);
		if (a[0] != ' ')
		{
			printf("%c", toupper(a[0]));
		}
		for (i = 1; i < n; ++i)
		{
			if (a[i - 1] == ' ' && a[i] != ' ')
			{
				printf("%c", toupper(a[i]));
			}
		}
		printf("\n");
	}
	return 0;
}
