#include "stdio.h"
#include "string.h"

int main(int argc, char const *argv[])
{
	int T, times[20000], i, moment[20000], C = 1, n, q, s, t, k, A;
	char st[6];
	scanf("%d",&T);
	while(T--)
	{
		A = 0;
		printf("Case %d:\n", C++);
		scanf("%d%d%d",&n,&q,&t);
		memset(times,0,sizeof(int) * (n + 1));
		memset(moment,0,sizeof(int) * (n + 1));
		while(q--)
		{
			scanf("%s",st);
			if (!strcmp(st,"Query"))
			{
				scanf("%d",&i);
				printf("%d\n",times[i]);
			}
			else
			{
				A++;
				scanf("%d%d",&s,&k);
				for (i = s; i <= k; ++i)
				{
					if (moment[i] == 0)
					{
						moment[i] = A;
					}
					else
					{
						if (A <= moment[i] + t - 1)
						{
							times[i]++;
						}
						else
						{
							moment[i] = A;
						}
					}
				}
			}
		}

	}
	return 0;
}
