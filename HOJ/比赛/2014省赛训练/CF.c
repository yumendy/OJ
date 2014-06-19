#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,lzt,a,b,f,a1,b1,i;
    char s[1001];
    scanf("%d ", &n);
    for (lzt = 0; lzt < n; lzt++)
    {
        a1 = 0;
        b1 = 0;
        gets(s);
        while (s[0]!='#' || s[1] !='#' || strlen(s)!=2)
        {
            a = 0;
            b = 0;
            f = 0;
            for (i = strlen(s); i >=0; i --)
            {
                if (s[i] == '\t')
                    a++;
                if (s[i] == ' ' && f == 0)
                    b++;
                if (s[i] != '\n' && s[i] != '\0' && s[i] != ' ' && s[i] != '\t')
                    f = 1;
            }
            gets(s);
            a1 += a;
            b1 += b;
        }
        printf("%d tab(s) replaced\n", a1);
        printf("%d trailing space(s) removed\n", b1);
    }
    return 0;
}