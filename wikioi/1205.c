#include "stdio.h"

int main(int argc, char const *argv[])
{
	char a[100][100];
	int i;
	i = 0;
	while(scanf("%s",a[i++]) != EOF);
	--i;
	while(--i > 0)
	{
		printf("%s ", a[i]);
	}
	printf("%s\n", a[0]);
	return 0;
}