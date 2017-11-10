/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月10日
*/
/*  print_array.c -- as the name said   */
#include <stdio.h>
void print_array(double source[], double * target1, double * target2, double * target3, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%lf\t", source[i]);
        printf("%lf\t", *target1++);
        printf("%lf\t", *target2++);
        printf("%lf\t", *target3++);
        printf("\n");
    }
}
