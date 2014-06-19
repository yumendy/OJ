#include "stdio.h"
#include "string.h"

int main(int argc, char const *argv[])
{
	int t, i, len;
	char a[52], b[52];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",a);
		len = strlen(a);
		for (i = 0; i < len; i += 2)
		{
			b[i + 1] = a[i];
		}
		for (i = 1; i < len; i += 2)
		{
			b[i - 1] = a[i];
		}
		b[len] = '\0';
		printf("%s\n", b);
	}
	return 0;
}
