#include "stdio.h"
#include "string.h"

int main(int argc, char const *argv[])
{
	int n, m, a[1000], i = 0;
	memset(a,0,sizeof(a));
	scanf("%d%d",&n,&m);
	while(n > 0)
	{
		a[i++] = n % m;
		n /= m;
	}
	i--;
	while(i >= 0)
	{
		printf("%X", a[i--]);
	}
	printf("\n");
	return 0;
}
