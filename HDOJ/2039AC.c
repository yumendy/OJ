#include "stdio.h"

int main()
{
	int n, i, j, flag;
	float a, b, c;

	scanf("%d",&n);
	while(n--)
	{
		scanf("%f%f%f",&a,&b,&c);
		
		if (a + b > c && a + c > b && b + c > a)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}