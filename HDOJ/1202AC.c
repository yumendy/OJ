#include "stdio.h"

int main()
{
	float s, p, a, b, t;
	int i, n;

	while(1)
	{
		if (scanf("%d",&n) != EOF)
		{
			t = 0;
			b = 0;
			for (i = 0; i < n; ++i)
			{
				scanf("%f%f",&s,&p);
				if (p != -1)
				{
					if (p >= 90)
					{
						a = 4;
					}
					else if (p >= 80)
					{
						a = 3;
					}
					else if (p >= 70)
					{
						a = 2;
					}
					else if (p >= 60)
					{
						a = 1;
					}
					else
					{
						a = 0;
					}
					t += s;
					b += (a * s);
				}
			}
			if (t != 0)
			{
				printf("%.2f\n",1.0 * b / t);
			}
			else
			{
				printf("-1\n");
			}
		}
		else
		{
			break;
		}
	}

	return 0;
}