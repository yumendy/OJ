#include "stdio.h"
#define N 5

void sort(float *a)
{
	int i, j, flag;
	float t;
	flag = 0;
	for (i = 0; i < N; ++i)
	{
		for (j = N - 1; i < j; j--)
		{
			if (*(a + j) < *(a + j - 1))
			{
				t = *(a + j);
				*(a + j) = *(a + j - 1);
				*(a + j - 1) = t;
				flag = 1;
			}
		}
		if (!flag)
		{
			break;
		}
		else
		{
			flag = 0;
		}
	}
}

int main(int argc, char const *argv[])
{
	float a[N];
	float *p = &a[0];
	int i;
	for (i = 0; i < N; ++i)
	{
		scanf("%f",p + i);
	}
	sort(p);
	for (i = 0; i < N; ++i)
	{
		printf("%f\n", a[i]);
	}
	return 0;
}
