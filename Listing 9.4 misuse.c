/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月31日
*/
/*  misuse.c -- uses a function incorrectly */
#include <stdio.h>
int imax();         /*  old_style declaration   */

int main(void)
{
    printf("The maximun of %d and %d is %d.\n", 3, 5, imax(3));
    printf("The maximun of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));

    return 0;
}

int imax(n, m)
int n, m;
{
    return (n > m) ? n : m;
}
