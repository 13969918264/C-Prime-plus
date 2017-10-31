/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月31日
*/
/*proto.c -- uses a function prototype  */
#include <stdio.h>
int imax(int, int);
int main(void)
{
    printf("The maixmum of %d and %d is %d.\n", 3, 5, imax(3, 5));
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));

    return 0;
}

int imax(int n, int m)
{
    return (n > m) ? n : m;
}
