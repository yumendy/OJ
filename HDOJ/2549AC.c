#include "stdio.h"
#include "string.h"

int main(int argc, char const *argv[])
{
	int T, n, len;
	char s[100];
	char *i;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%s%d",s,&n);
		len = strlen(s);
		i = strchr(s,'.');
		if (len - (i - s + 1) < n)
		{
			printf("0\n");
		}
		else
		{
			printf("%c\n", *(i + n));
		}
	}
	return 0;
}
