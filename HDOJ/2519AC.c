#include "stdio.h"

double A(int m,int n)
{
	double r = 1, i;
	for (i = n; i >= n - m + 1; i--)
	{
		r *= i;
	}
	return r;
}

double C(int m,int n)
{
	double a, i, r;
	a = A(m,n);
	r = 1;
	for (i = m; i >= 1; i--)
	{
		r *= i;
	}
	return a / r;
}

int main(int argc, char const *argv[])
{
	int c, m, n;

	scanf("%d",&c);
	while(c--)
	{
		scanf("%d%d",&n,&m);
		if (n < m)
		{
			printf("0\n");
		}
		else
		{
			printf("%.0lf\n", C(m,n));
		}
	}
	return 0;
}