#include "stdio.h"

int main(int argc, char const *argv[])
{
	int n, i, a[1000];
	while(scanf("%d",&n) != EOF)
	{
		for (i = 0; i < n; ++i)
		{
			scanf("%d",&a[i]);
		}
		for (i = 0; i < n; ++i)
		{
			printf("%c",a[i]);
		}
	}
	return 0;
}