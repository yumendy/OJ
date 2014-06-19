#include "stdio.h"

int main(int argc, char const *argv[])
{
	int n, a, b;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&a,&b);
		a%b==0 ? printf("YES\n"): printf("NO\n");
	}
	return 0;
}