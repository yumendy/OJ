#include <stdio.h>
int main(void)
{
    long a, b, c;
    while (scanf("%ld %ld %ld", &a, &b, &c)==3)
        printf("%.0lf\n",(double)a+b+c);
    return 0;
}
