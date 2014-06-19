#include "stdio.h"
#include "stdlib.h"

typedef struct a
{
	int StartHour;
	int StartMinute;
	int EndHour;
	int EndMinute;
} A;

int cmp(const void *a, const void *b)
{
	int SHa, SMa, SHb, SMb;
	SHa = (*(A **)a) -> StartHour;
	SMa = (*(A **)a) -> StartMinute;
	SHb = (*(A **)b) -> StartHour;
	SMb = (*(A **)b) -> StartMinute;
	if (SHa != SHb)
	{
		return SHa - SHb;
	}
	else
	{
		return SMa - SMb;
	}
}

int main(int argc, char const *argv[])
{
	int n, i, flag;
	A a[200];
	A *pt[200];
	while(scanf("%d",&n) && n != 0)
	{
		for (i = 0; i < n; ++i)
		{
			scanf("%d:%d-%d:%d",&a[i].StartHour,&a[i].StartMinute,&a[i].EndHour,&a[i].EndMinute);
			pt[i] = &a[i];
		}
		qsort(pt,n,sizeof(pt[0]),cmp);
		for (i = 0; i < n - 1; ++i)
		{
			flag = 0;
			if (pt[i] -> EndHour > pt[i + 1] -> StartHour)
			{
				printf("conflict\n");
				flag = 1;
				break;
			}
			else if (pt[i] -> EndHour == pt[i + 1] -> StartHour)
			{
				if (pt[i] -> EndMinute > pt[i + 1] -> StartMinute)
				{
					printf("conflict\n");
					flag = 1;
					break;
				}
			}
		}
		if (!flag)
		{
			printf("no conflict\n");
		}
	}
	return 0;
}
