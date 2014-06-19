#include "stdio.h"

int main()
{
	int a, b, m, n, i, l[5];

	while(scanf("%d%d",&a,&b) != EOF)
	{
		m = a % 10;
		l[1] = m;
		l[2] = m * m % 10;
		l[3] = m * m * m % 10;
		l[0] = m * m * m * m % 10;

		n = b % 4;
		printf("%d\n",l[n]);
	}
	return 0;
}