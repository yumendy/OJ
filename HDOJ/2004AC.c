#include "stdio.h"

void main(void)
{
	int a, b;
	char l;
	while(scanf("%d",&a) !=EOF)
	{
		if (a < 0)
		{
			printf("Score is error!\n");
		}
		else if (a > 100)
		{
			printf("Score is error!\n");
		}
		else
		{
			b = a / 10;
			switch(b)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5: l = 'E';break;
				case 6: l = 'D';break;
				case 7: l = 'C';break;
				case 8: l = 'B';break;
				default: l ='A';break;
			}
			printf("%c\n",l);
		}
	}
}
