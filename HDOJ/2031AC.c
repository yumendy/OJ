#include "stdio.h"
#include "math.h"

int main()
{
	int n, r, flag, i, a[1000];

	while(scanf("%d%d",&n,&r) != EOF)
	{
		if (n == 0)
		{
			printf("0\n");
		}
		else
		{
			flag = 0;
			if (n < 0)
			{
				flag = 1;	
			}
			n = abs(n);
			memset(a,0,sizeof(a));
			i = 0;
			while(n > 0)
			{
				a[i] = n % r;
				n /= r;
				i++;
			}
			i--;
			if (flag)
			{
				printf("-");
			}
			for (; i > 0; i--)
			{
				printf("%X",a[i]);
			}
			printf("%X\n",a[0]);
		}
	}
	return 0;
}