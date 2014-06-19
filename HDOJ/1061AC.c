#include <stdio.h>
#include <string.h>
int main()
{
	__int64 a,b,p[4],c;
	int i;
	scanf("%I64d",&c);
	while(c--)
	{
		b=0;
		memset(p,0,sizeof(p));
		scanf("%I64d",&a);
		b=a;
		p[1]=a%10;
		p[2]=(p[1]*a)%10;
		p[3]=(p[2]*a)%10;
		p[0]=(p[3]*a)%10;
		if(b>=4)
		b=b%4;
		printf("%I64d\n",p[b]);
	}
		return 0;
}