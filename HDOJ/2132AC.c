#include "stdio.h"

int main(int argc, char const *argv[])
{
	__int64 a[100005], i;
	int n;

	a[0] = 0;
	for (i = 1; i < 100002; ++i)
	{
		a[i] = a[i - 1] + ((i % 3 == 0) ? (i * i * i) : i);
	}
	while(scanf("%d",&n) && n >= 0)
	{
		printf("%I64d\n", a[n]);
	}
	return 0;
}
