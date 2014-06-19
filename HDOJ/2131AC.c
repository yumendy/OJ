#include "stdio.h"
#include "string.h"

int main()
{
	char key[2], word[205];
	double a, n;
	int sum, i;

	while(scanf("%s",key) != EOF)
	{
		n = 0;
		scanf("%s",word);
		sum = strlen(word);
		key[1] = tolower(key[0]);
		for (i = 0; i < sum; ++i)
		{
			if (tolower(word[i]) == key[1])
			{
				n++;
			}
		}
		printf("%.5lf\n", 1.0 * n / sum);
	}
	return 0;
}
