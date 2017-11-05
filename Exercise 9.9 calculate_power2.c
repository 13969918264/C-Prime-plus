/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月05日
*/
/*  calculate_power2.c -- calculate double number to power int number by using a independent function */
#include <stdio.h>
#include "calculate_power.h"

int main(void)
{
    double initial, result;
    int times;

    printf("Enter the base of a power.\n");
    scanf("%lf", &initial);
    printf("Then enter the index of a power:\n");
    scanf("%d", &times);
    result = power(initial, times);
    if (result != UNDEFINED)
        printf("%lf to power %d is %lf.\n", initial, times, result);
    else
        printf("%lf to power %d is undefined.\n", initial, times);

    return 0;
}
