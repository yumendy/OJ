#include "stdio.h"

void main(void)
{
	char s[100005];
	int a[26], i;

	while(gets(s))
	{
		for (i = 0; i < 26; ++i)
		{
			a[i] = 0;
		}
		for (i = 0; s[i] != '\0'; ++i)
		{
			if (s[i]<= 'z' && s[i] >= 'a')
			{
				a[s[i] - 97]++;
			}
		}
		for (i = 0; i < 26; ++i)
		{
			printf("%c:%d\n",i + 97,a[i]);
		}
		printf("\n");
	}
}