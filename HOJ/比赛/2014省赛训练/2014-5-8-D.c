#include "stdio.h"
#include "string.h"

int main(int argc, char const *argv[])
{
	int i, j, n, T, t, a[26], b[26];
	char s[13];
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		memset(a,0,sizeof(a));
		scanf("%s",s);
		t = 0;
		while(s[t++] != '\0')
		{
			a[s[t - 1] - 'A']++;
		}
		for (i = 1; i < n; ++i)
		{
			scanf("%s",s);
			memset(b,0,sizeof(b));
			t = 0;
			while(s[t++] != '\0')
			{
				b[s[t - 1] - 'A']++;
			}
			for (j = 0; j < 26; ++j)
			{
				if (a[j] && !b[j])
				{
					a[j] = 0;
				}
				else
                {
                    a[j] = a[j] <= b[j] ? a[j] : b[j];
                }
			}
		}
		for (i = 0; i < 26; ++i)
		{
			if (a[i])
			{
				for (j = 0; j < a[i]; ++j)
				{
					printf("%c", i + 'A');
				}
			}
		}
		printf("\n");
	}
	return 0;
}
