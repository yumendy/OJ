#include "stdio.h"

int main()
{
	char a[6], b[100];
	int an[6], n, m, i, j;

	while(1)
	{
		memset(an,0,sizeof(an));
		gets(a);
		if (a[0] == '#')
		{
			break;
		}
		else
		{
			gets(b);
			n = strlen(b);
			m = strlen(a);
			for (i = 0; i < n; ++i)
			{
				for (j = 0; j < m; ++j)
				{
					if (b[i] == a[j])
					{
						an[j]++;
					}
				}
			}
			for (i = 0; i < m; ++i)
			{
				printf("%c %d\n",a[i],an[i]);
			}
		}
	}
	return 0;
}
