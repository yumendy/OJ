#include "stdio.h"
#include "string.h"
#include "stdlib.h"

typedef struct student
{
	char stuid[8];
	char stuname[10];
	int score;
} STUDENT;

void AppendRecord(STUDENT *p, STUDENT *pt[],int n)
{
	int i;
	for (i = 0; i < n; ++i)
	{
		scanf("%s %s %d",p[i].stuid, p[i].stuname, &p[i].score);
		pt[i] = &p[i];
	}
}

int cmp2(const void *a, const void *b)
{
	if ((*(STUDENT **)a)->score != (*(STUDENT **)b)->score)
	{
		return (*(STUDENT **)a)->score > (*(STUDENT **)b)->score ? 1 : -1;
	}
	else
	{
		return strcmp((*(STUDENT **)a)->stuid,(*(STUDENT **)b)->stuid);
	}
}

int cmp3(const void *a, const void *b)
{
	return strcmp((*(STUDENT **)a)->stuid,(*(STUDENT **)b)->stuid);
}

int cmp4(const void *a, const void *b)
{
	if (strcmp((*(STUDENT **)a)->stuname,(*(STUDENT **)b)->stuname))
	{
		return strcmp((*(STUDENT **)a)->stuname,(*(STUDENT **)b)->stuname);
	}
	else
	{
		return strcmp((*(STUDENT **)a)->stuid,(*(STUDENT **)b)->stuid);
	}

}

void Sort(STUDENT *pt[], int n, int order)
{
	int i;
	if (order == 3)
	{
		qsort(pt,n,sizeof(pt[0]),cmp2);
	}
	else if (order == 1)
	{
		qsort(pt,n,sizeof(pt[0]),cmp3);
	}
	else if (order == 2)
	{
		qsort(pt,n,sizeof(pt[0]),cmp4);
	}
	for (i = 0; i < n; ++i)
	{
		printf("%s %s %d\n", pt[i]->stuid, pt[i]->stuname, pt[i]->score);
	}
}

STUDENT *pt[100000];

int main(int argc, char const *argv[])
{
	int n, c, Case = 1;
	while(scanf("%d%d",&n,&c) && (n != 0 || c != 0))
	{
		printf("Case %d:\n",Case++);
		struct student *p;

		p = (STUDENT *)malloc(n * sizeof(STUDENT));
		AppendRecord(p, pt, n);
		Sort(pt, n, c);
		free(p);
	}
	return 0;
}
