#include "stdio.h"

int main(int argc, char const *argv[])
{
	int n, i, num, s, sum, a[100], t;

	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&num,&s);
		sum = 0;
		for (i = 0; i < num; ++i)
		{
			scanf("%d",&a[i]);
		}
		t = a[s - 1];
		for (i = 0; i < num; ++i)
		{
			if (a[i] > t)
			{
				sum++;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}
