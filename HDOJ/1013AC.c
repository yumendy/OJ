#include "stdio.h"
#include "string.h"

void main(void)
{
	int sum, i, len, a;
	char s[2000];

	while(gets(s))
	{
		sum = 0;
		if (s[0] != '0')
		{
			for (i = 0; i < strlen(s); ++i)
			{
				sum += s[i] - 48;
			}
			a = sum % 9;
			if (a)
			{
				printf("%d\n",a);
			}
			else
			{
				printf("9\n");
			}
		}
		else
		{
			break;
		}
	}
}
