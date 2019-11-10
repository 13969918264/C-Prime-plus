/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月05日
*/
/*  convert.c -- represent a number by another base */
#include <stdio.h>
#include "convert.h"

int main(void)
{
    int number, base;

    printf("Enter a number based-10:\n");
    scanf("%d", &number);
    printf("Enter the new base:\n");
    scanf("%d", &base);
    printf("You entered %d based-10.\n ", number);
    printf("equivalent base-%d.\n", base);
    to_base_n(number, base);
    putchar('\n');

    return 0;
}
