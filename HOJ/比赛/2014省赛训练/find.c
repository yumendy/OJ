#include "stdio.h"

int isCube(int cube[], int n)
{
	int i;
	for (i = 0; i < 51; ++i)
	{
		if (n == cube[i])
		{
			return 1;
		}
	}
	return 0;
}

int cmp(const void *a, const void *b)
{
	int *c = (int *)a;
	int *d = (int *)b;
    if(*(c+1) != *(d+1))
        return *(c+1) - *(d+1);
    return *(c) - *(d);
}


int main(int argc, char const *argv[])
{
	int m, n, a, b, p, q, i, j, k, flag, cube[51], ls[100][2], seq[10], Case = 0;
	for (i = 0; i <= 50; ++i)
	{
		cube[i] = i * i * i;
		printf("%d\t", cube[i]);
	}

	while(scanf("%d%d",&n,&m) && (n != 0 || m != 0))
	{
		printf("Case %d:\n", Case++);
		flag = 0;
		for (p = 0; p <= m; p++)
		{
			for (q = 1; q <= m; q++)
			{
				a = cube[p] + cube[q];
				printf("%d\n", a);
				for (b = 1; b <= (2 * cube[m] - a) / n; ++b)
				{
					for (k = 1; k < n; ++k)
					{
						if (!isCube(cube,a + n * b))
						{
							break;
						}
						ls[flag++][0] = a;
						ls[flag - 1][1] = b;
					}
				}
			}
		}
		if (!flag)
		{
			printf("NONE\n");
		}
		else
		{
			qsort(ls,flag,sizeof(ls),cmp);
			for (i = 0; i < flag; ++i)
			{
				printf("%d %d\n", ls[0],ls[1]);
			}
		}
	}
	return 0;
}
