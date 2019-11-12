/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月03日
*/
/*  harmonic.c -- reverse the numbers by using a function   */
#include <stdio.h>
#include "harmonic.h"

int main(void)
{
    double first, second;
    double result;

    printf("Enter 2 number.\n");
    scanf("%lf %lf", &first, &second);
    result = reverse(first, second);
    printf("%lf\n", result);

    return 0;
}
