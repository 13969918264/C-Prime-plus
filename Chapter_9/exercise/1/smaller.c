/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月2日
*/
/*  smaller.c -- using a function you designed return a smaller double number   */
#include <stdio.h>
#include "smaller.h"

int main(void)
{
    double x;
    double y;

    printf("Enter two number:\n");
    scanf("%lf %lf", &x, &y);
    printf("The smaller one is %lf.\n", min(x , y));

    return 0;
}
