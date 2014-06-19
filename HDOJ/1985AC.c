#include "stdio.h"
#include "string.h"

int main()
{
	int t, i;
	double a;
	char s[5];

	scanf("%d",&t);
	i = 1;
	while(t--)
	{
		scanf("%lf%s",&a,s);
		if (!strcmp(s,"g"))
		{
			printf("%d %.4lf l\n",i++,a * 3.7854);
		}
		else if (!strcmp(s,"kg"))
		{
			printf("%d %.4lf lb\n",i++,a * 2.2046);
		}
		else if (!strcmp(s,"l"))
		{
			printf("%d %.4lf g\n",i++,a * 0.2642);
		}
		else if (!strcmp(s,"lb"))
		{
			printf("%d %.4lf kg\n",i++,a * 0.4536);
		}
	}
	return 0;
}