#include "stdio.h"

int gcd(int a, int b)
{
	int t;
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	t = a % b;
	while(t != 0)
	{
		a = b;
		b = t;
		t = a % b;
	}
	return b;
}

int main(int argc, char const *argv[])
{
	int a, b;
	scanf("%d%d",&a,&b);
	printf("%d\n", gcd(a,b));
	return 0;
}