#include "stdio.h"

int main()
{
	int a, b, i, n;
	char o;

	scanf("%d",&n);
	for (i = 0; i < n; ++i)
	{
		getchar();
		scanf("%c%d%d",&o,&a,&b);

		if (o == '+')
		{
			printf("%d\n",a + b);
		}
		else if (o == '-')
		{
			printf("%d\n",a - b);
		}
		else if (o == '*')
		{
			printf("%d\n",a * b);
		}
		else
		{
			if (a % b == 0)
			{
				printf("%d\n",a / b);
			}
			else
			{
				printf("%.2f\n",1.0 * a / b);
			}
		}
	}
}