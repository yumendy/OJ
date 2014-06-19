#include "stdio.h"

int main(int argc, char const *argv[])
{
	int n, a, t, sum;

	scanf("%d",&n);
	while(n--)
	{
		sum = 0;
		scanf("%d",&a);
		t = a / 2;
		a -= t;
		if (t % 10 == 0)
		{
			sum += (t / 10);
		}
		else
		{
			sum += (t / 10 + 1);
		}
		t = a * 2 / 3;
		a -= t;
		if (t % 10 == 0)
		{
			sum += (t / 10);
		}
		else
		{
			sum += (t / 10 + 1);
		}
		if (a % 10 == 0)
		{
			sum += (a / 10);
		}
		else
		{
			sum += (a / 10 + 1);
		}
		printf("%d\n", sum);
	}
	return 0;
}
