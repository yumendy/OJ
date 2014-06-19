#include "stdio.h"
#include "math.h"
#define N 5

int cmp(float *pa, float *pb)
{
	int i;
	for (i = 0; i < N; ++i)
	{
		if (fabs(*(pa + i) - *(pb + i)) > 1e-6)
		{
			return 1;
		}
	}
	return 0;
}

int main(int argc, char const *argv[])
{
	float a[N], b[N];
	float *pa = &a[0], *pb = &b[0];
	int i;
	printf("Input array a:\n");
	for (i = 0; i < N; ++i)
	{
		scanf("%f",pa + i);
	}
	printf("Input array b:\n");
	for (i = 0; i < N; ++i)
	{
		scanf("%f",pb + i);
	}
	if (!cmp(pa, pb))
	{
		printf("same\n");
	}
	else
	{
		printf("different\n");
	}
	return 0;
}