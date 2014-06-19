#include "stdio.h"
#include "string.h"

int main(int argc, char const *argv[])
{
	int n, i, j, max, t, index = 0;
	char a[1001][15];
	while(scanf("%d", &n) && n != 0)
	{
		for (i = 0; i < n; ++i)
		{
			scanf("%s", a[i]);
		}
		max = 0;
		for (i = 0; i < n; ++i)
		{
			t = 1;
			for (j = i + 1; j < n; ++j)
			{
				if (!strcmp(a[i],a[j]))
				{
					t++;
				}
			}
			if (t > max)
			{
				max = t;
				index = i;
			}
		}
		printf("%s\n", a[index]);
	}
	return 0;
}
