#include "stdio.h"

int f(char a)
{
	if (a > 96 && a < 123)
	{
		return -1 *(a - 'a' + 1);
	}
	else if (a > 64 && a < 91)
	{
		return a - 'A' + 1;
	}
}

int main(int argc, char const *argv[])
{
	int n, b;
	char a;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		scanf("%s%d",&a,&b);
		printf("%d\n",b + f(a));
	}
	return 0;
}