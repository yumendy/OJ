#include "stdio.h"

int main(int argc, char const *argv[])
{
	int n, i, j, t, flag;
	int a[100];
	scanf("%d",&n);
	for (i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	flag = 0;
	for (i = 0; i < n; ++i)
	{
		for (j = n - 1; i < j; j--)
		{
			if (a[j] < a[j - 1])
			{
				t = a[j];
				a[j] = a[j - 1];
				a[j - 1] = t;
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
	printf("%d %d\n", a[0],a[n - 1]);
	return 0;
}