#include "stdio.h"

int main()
{
	int n, a[3], b[3], i, m;

	scanf("%d",&n);
	while(n--)
	{
		for (i = 0; i < 3; ++i)
		{
			scanf("%d",&a[i]);
		}
		for (i = 0; i < 3; ++i)
		{
			scanf("%d",&b[i]);
		}
		m = 0;
		for (i = 0; i < 3; ++i)
		{
			if (a[i] - b[i] > 0)
			{
				printf("First\n");
				m++;
				break;
			}
			else if (a[i] - b[i] < 0)
			{
				printf("Second\n");
				m++;
				break;
			}
		}
		if (!m)
		{
			printf("Same\n");
		}
	}
	return 0;
}