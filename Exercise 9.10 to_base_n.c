/*
    Name: 赵子豪(ZiHao)
    Date: 2017年11月05日
*/
/*  to_base_n.c -- change a number into number based-n  */
#include <stdio.h>
void to_base_n(int m, int n)
{
    int r;

    r = m % n;
    if (m >= n)
        to_base_n(m / n, n);
    if (r == 0)
        putchar('0');
    else
        printf("%d", r);
}
