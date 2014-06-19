#include "stdio.h"

int main(int argc, char const *argv[])
{
	long a[41];
	int n, i;
	a[1] = a[2] = 1;
	for (i = 3; i < 41; ++i)
	{
		a[i] = a[i - 1] + a[i - 2];
	}
	scanf("%d",&n);
	printf("%ld\n", a[n]);
	return 0;
}