#include "stdio.h"

void main(void)
{
	char s[100], c;
	int i;

	while(gets(s))
	{
		if (s[0] > 96 && s[0] < 123)
		{
			s[0] -= 32;
		}
		for (i = 1; s[i] != '\0'; ++i)
		{
			if (s[i] == 32 && s[i + 1] < 123 && s[i + 1] > 96)
			{
				s[i + 1] -= 32;
			}
		}
		puts(s);
	}
}