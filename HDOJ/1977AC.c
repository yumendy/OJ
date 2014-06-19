#include "stdio.h"

int main()
{
	int t;
	__int64 n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%I64d",&n);
		printf("%I64d %I64d\n",n * n * n,(n + 1) * (n + 1) * (n + 1));
	}
	return 0;
}
