#include "stdio.h"

void main(void)
{
	char s[100], c, m;
	int i, j, k;

	while(scanf("%s",s) != EOF)
	{
		m = s[0];
		for (i = 1;s[i] != '\0'; ++i)
		{
			if (s[i] > m)
			{
				m = s[i];
			}
		}
		for (i = 0;s[i] != '\0'; ++i)
		{
			if (s[i + 1] != '\0')
			{
				if (s[i] != m)
				{
					printf("%c",s[i]);
				}
				else
				{
					printf("%c(max)",s[i]);
				}
			}
			else
			{
				if (s[i] != m)
				{
					printf("%c\n",s[i]);
				}
				else
				{
					printf("%c(max)\n",s[i]);
				}	
			}
		}
		memset(s, 0, sizeof(char)*100);
	}
}