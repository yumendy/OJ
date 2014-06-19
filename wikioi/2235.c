#include "stdio.h"

int main(int argc, char const *argv[])
{
	int a;
	float b;
	scanf("%d %f",&a,&b);
	printf("%d\n", ((int)(a * b + 5)) / 10 * 10);
	return 0;
}