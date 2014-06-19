#include "stdio.h"

void main(void)
{
	char a, b, c, t;

	while(scanf("%c%c%c%c",&a,&b,&c,&t) != EOF)
	{
		if(a < b)
		{
			if(a < c)
			{
				if(b < c)
				{
					printf("%c %c %c\n",a,b,c);
				}
				else
				{
					printf("%c %c %c\n",a,c,b);
				}
			}
			else
			{
				printf("%c %c %c\n",c,a,b);
			}
		}
		else
		{
			if (c > b)
			{
				if (a > c)
				{
					printf("%c %c %c\n",b,c,a);
				}
				else
				{
					printf("%c %c %c\n",b,a,c);
				}
			}
			else
			{
				printf("%c %c %c\n",c,b,a);
			}
		}
	}
}
