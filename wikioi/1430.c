#include "stdio.h"

#define RANGE 30000

void PrimeTable(int i_table[])
{
    //筛选法求素数表
    int i, j;
    for (i = 0; i < RANGE; ++i)
    {
        i_table[i] = 1;
    }
    i_table[0] = i_table[1] = 0;
    for(i = 2; i <= RANGE; ++i)
    {
        if(i_table[i])
        {
            for(j = 2 * i;j <= RANGE; j += i)
            {
                i_table[j] = 0;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int i_table[RANGE], n;
    PrimeTable(i_table);
    scanf("%d",&n);
    if (i_table[n])
    {
        printf("\\t");
    }
    else
    {
        printf("\\n");
    }
    return 0;
}