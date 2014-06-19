#include "stdio.h"
#include "string.h"

int main(int argc, char const *argv[])
{
	int T, i, c, all;
	double sum;
	char s[3];
	while(scanf("%d",&T) != EOF)
	{
		sum = all = 0;
		while(T--)
		{
			scanf("%d%s",&c,s);
			if (s[0] == 'P' || s[0] == 'N')
			{
				continue;
			}
			else
			{
				all += c;
				if (!strcmp("A",s))
				{
					sum += 4.0 * c;
				}
				else if (!strcmp("A-",s))
				{
					sum += 3.7 * c;
				}
				else if (!strcmp("B+",s))
				{
					sum += 3.3 * c;
				}
				else if (!strcmp("B",s))
				{
					sum += 3.0 * c;
				}
				else if (!strcmp("B-",s))
				{
					sum += 2.7 * c;
				}
				else if (!strcmp("C+",s))
				{
					sum += 2.3 * c;
				}
				else if (!strcmp("C",s))
				{
					sum += 2.0 * c;
				}
				else if (!strcmp("C-",s))
				{
					sum += 1.7 * c;
				}
				else if (!strcmp("D",s))
				{
					sum += 1.3 * c;
				}
				else if (!strcmp("D-",s))
				{
					sum += 1.0 * c;
				}
				else if (!strcmp("F",s))
				{
					sum += 0;
				}
			}
		}
		if (all == 0)
		{
			printf("0.00\n");
		}
		else
		{
			printf("%.2lf\n",1.0 * sum / all);
		}
		
	}
	return 0;
}