#include "stdio.h"

int A(int m,int n)
{
	int r = 1, i;
	for (i = n; i >= n - m + 1; i--)
	{
		r *= i;
	}
	return r;
}

int C(int m,int n)
{
	int a, i, r;
	a = A(m,n);
	r = 1;
	for (i = m; i >= 1; i--)
	{
		r *= i;
	}
	return a / r;
}


int main()
{
	int c, m, n, i;
	char t;

	scanf("%d",&c);
	getchar();
	for (i = 0; i < c; ++i)
	{
		scanf("%c%d%d",&t,&n,&m);
		getchar();
		if (t == 'A')
		{
			printf("%d\n",A(m,n));
		}
		if (t == 'C')
		{
			printf("%d\n",C(m,n));
		}
	}
	return 0;
}
