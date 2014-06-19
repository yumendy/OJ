#include "stdio.h"
#include "math.h"

int main()
{
	int n, m, i, sum, j, a[500], min;

	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&m);
		for (i = 0; i < m; ++i)
		{
			scanf("%d",&a[i]);
		}
		min = 0;
		for (i = 0; i < m; ++i)
		{
			min += (abs(a[0] - a[i]));
		}
		for (i = 1; i < m; ++i)
		{
			sum = 0;
			for (j = 0; j < m; ++j)
			{
				sum += (abs(a[i] - a[j]));
			}
			if (sum < min)
			{
				min = sum;
			}
		}
		printf("%d\n",min);
	}
	return 0;
}
