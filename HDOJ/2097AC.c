#include "stdio.h"
#include "string.h"

int main()
{
	int n, a[10], b[10], i, d, h, s, t;

	while(scanf("%d",&n) && n != 0)
	{
		t = n;
		d = 0;
		while(t > 0)
		{
			d += (t % 10);
			t /= 10;
		}
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		t = n;
		h = 0;
		for (i = 0; t > 0; ++i)
		{
			h += (t % 16);
			t /= 16;
		}
		s = 0;
		t = n;
		for (i = 0; 0 < t; ++i)
		{
			s += (t % 12);
			t /= 12;
		}
		if (d == h && h == s)
		{
			printf("%d is a Sky Number.\n", n);
		}
		else
		{
			printf("%d is not a Sky Number.\n", n);
		}
	}
	return 0;
}
