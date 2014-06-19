#include "stdio.h"
#include "string.h"
#include "math.h"

int main(int argc, char const *argv[])
{
	int m, a[1000], sum = 0, l, i, j = 0;
	char n[100];
	memset(a,0,sizeof(a));
	scanf("%s%d",n,&m);
	l = strlen(n);
	for (i = l - 1; i >= 0; i--)
	{
		if (n[i] > 47 && n[i] < 58)
		{
			a[j++] = n[i] - 48;
		}
		else if (n[i] > 64 && n[i] < 71)
		{
			a[j++] = n[i] - 65 + 10;
		}
	}
	for (i = 0; i < j; ++i)
	{
		sum += pow(m,i) * a[i];
	}
	printf("%d\n", sum);
	return 0;
}
