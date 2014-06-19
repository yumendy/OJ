#include "stdio.h"
#include "math.h"

int main()
{
	int n, i, t, a, sum;
	double b;

	while(scanf("%d",&n) != EOF)
	{
		sum = 0;
		while(n--)
		{
			i = 0;
			scanf("%d(%lf)",&a,&b);
			while(a > 0)
			{
				t = a % 10;
				sum += (t * pow(b,i++));
				a /= 10;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
