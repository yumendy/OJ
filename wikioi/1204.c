#include "stdio.h"

int main(int argc, char const *argv[])
{
	char a[100], b[100];
	char *p;
	scanf("%s %s",a,b);
	p = strstr(a,b);
	printf("%d\n", p - a + 1);
	return 0;
}