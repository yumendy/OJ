#include "stdio.h"

long f(int n,int a,int b)
{
	if (n == 1)
	{
		return 1;
	}
	else if (n == 2)
	{
		return 1;
	}
	else
	{
		return (a * f(n - 1,a,b) + b * f(n - 2,a,b)) % 7;
	}
}


int main()
{
	int a, b, n;
	while(1)
	{
		scanf("%d%d%d",&a,&b,&n);
		if (a !=0 || b != 0 || n != 0)
		{
			printf("%ld\n",f(n % 49,a,b));
		}
		else
		{
			break;
		}
	}
	return 0;
}
