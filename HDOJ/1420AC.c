#include "stdio.h"

int main()
{
	int n;
	__int64 a, b, c, i;

	scanf("%d",&n);
	while(n--)
	{
		scanf("%I64d%I64d%I64d",&a,&b,&c);
		i = 1;
		while(b)
		{
			i *= a;
			i %= c;
			if (a == 0)
			{
				break;
			}
			b--;
		}
		printf("%ld\n",i);
	}
	return 0;
}
