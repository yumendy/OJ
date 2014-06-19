#include "stdio.h"
#include "math.h"

int main()
{
	int  a, b, k;

	while(1)
	{
		scanf("%d%d%d",&a,&b,&k);

		if (a != 0 || b != 0)
		{
			if ((a % (int)pow(10,k)) == (b % (int)pow(10,k)))
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n",a + b);
			}
		}
		else
		{
			break;
		}
	}
	return 0;
}