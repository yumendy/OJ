#include "stdio.h"
#include "string.h"

int main(int argc, char const *argv[])
{
	int a[35700], i, j, n, t, len;
	while(scanf("%d",&n) != EOF)
	{
		if (!n)
		{
			printf("1\n");
		}
		else
		{
			memset(a,0,sizeof(a));
			a[0] = 1;
			len = 0;
			t = 0;
			for (i = 1; i <= n; ++i)
			{
				for (j = 0; j <= len; ++j)
				{
					t += a[j] * i;
					a[j] = t % 10;
					t /= 10;
					if (j == len && t)
					{
						len++;
					}
				}
			}
			for (i = len; i >= 0; i--)
			{
				printf("%d", a[i]);
			}
			printf("\n");
		}
	}
	return 0;
}