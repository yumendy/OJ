#include "stdio.h"
#include "math.h"

void main(void)
{
	int x, y, m, i, s;
	int prime(int n);

	while(1)
	{
		scanf("%d%d",&x,&y);
		if(x != 0 || y != 0)
		{
			for (i = x; i <= y; ++i)
			{
				m = i * i + i + 41;
				s = prime(m);
				if(s == 0)
				{
					break;
				}
			}
			if (s == 1)
			{
				printf("OK\n");
			}
			else
			{
				printf("Sorry\n");
			}
		}
		else if(x == 0 && y == 0)
		{
			break;
		}
	}
}

int prime(n)
{
	int i, j, a, s;
	s = 1;
	a = sqrt(n) + 1;
	if(n % 2 == 0)
	{
		s = 0;
	}
	else
	{
		for (i = 3; i < a;i = i + 2)
		{
			if (n % i == 0)
			{
				s = 0;
				break;
			}
		}
	}
	return s;
}
