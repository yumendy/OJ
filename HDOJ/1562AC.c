#include "stdio.h"

int main(int argc, char const *argv[])
{
	int a, b, c, x, n, i, flag;

	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d%d",&a,&b,&c);
		flag = 0;
		for (i = 1000; i < 10000; ++i)
		{
			if (i % a == 0 && (i + 1) % b == 0 && (i + 2) % c == 0)
			{
				printf("%d\n",i);
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			printf("Impossible\n");
		}
	}
	return 0;
}
