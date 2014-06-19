#include "stdio.h"
#include "ctype.h"

void main(void)
{
	int n, i, j, b[6];
	char s[100];

	scanf("%d",&n);
	getchar();
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < 5; ++j)
		{
			b[j] = 0;
		}
		gets(s);
		for (j = 0; s[j] != '\0'; ++j)
		{
			switch(tolower(s[j]))
			{
				case 'a': b[0] += 1; break;
				case 'e': b[1] += 1; break;
				case 'i': b[2] += 1; break;
				case 'o': b[3] += 1; break;
				case 'u': b[4] += 1; break;
			}
		}
		printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",b[0],b[1],b[2],b[3],b[4],b[5]);
		if (i != n - 1)
		{
			printf("\n");
		}
	}
}