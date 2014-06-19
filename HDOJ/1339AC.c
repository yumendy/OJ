#include "stdio.h"

int main()
{
	int n, p;
	long m;

	scanf("%d",&n);
	while(n--)
	{
		scanf("%ld",&m);
		p = 0;
		while(m % 2 == 0)
		{
			p++;
			m /= 2;
		}
		printf("%ld %d\n",m,p);
	}
	return 0;
}