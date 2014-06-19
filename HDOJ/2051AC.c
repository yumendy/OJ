#include "stdio.h"
#include "string.h"

int main()
{
	int n, a[1000], i;
	while(scanf("%d",&n) != EOF)
	{
		memset(a,0,sizeof(a));
		i = 0;
		while(n > 0)
		{
			a[i] = n % 2;
			n /= 2;
			i++;
		}
		while(i--)
		{
			printf("%d",a[i]);
		}
		printf("\n");
	}
	return 0;
}
