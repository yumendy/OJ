#include "stdio.h"
#include "stdlib.h"

typedef struct a
{
	int Start;
	int End;

} A;

int cmp(const void *a, const void *b)
{
	int Sta, Sea, Stb, Seb;
	Sta = (*(A **)a) -> Start;
	Sea = (*(A **)a) -> End;
	Stb = (*(A **)b) -> Start;
	Seb= (*(A **)b) -> End;
	if (Sta != Stb)
	{
		return Sta - Stb;
	}
	else
	{
		return Sea - Seb;
	}
}

int main(int argc, char const *argv[])
{
	int n, i, flag, t1, t2, t3, t4;
	A a[200];
	A *pt[200];
	while(scanf("%d",&n) && n != 0)
	{
		for (i = 0; i < n; ++i)
		{
			scanf("%d:%d-%d:%d",&t1,&t2,&t3,&t4);
			a[i].Start = 60 * t1 + t2;
			a[i].End = 60 * t3 + t4;
			pt[i] = &a[i];
		}
		qsort(pt,n,sizeof(pt[0]),cmp);
		for (i = 0; i < n - 1; ++i)
		{
			flag = 0;
			if (pt[i + 1] -> Start < pt[i] -> End  pt[i + 1] -> End > pt[i] -> End)
			{
				printf("conflict\n");
				flag = 1;
				break;
			}
		}
		if (!flag)
		{
			printf("no conflict\n");
		}
	}
	return 0;
}
