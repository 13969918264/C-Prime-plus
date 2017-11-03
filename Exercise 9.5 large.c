/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月03日
*/
/*  large.c -- set the variable as the larger one   */
#include <stdio.h>
#include "large.h"

int main(void)
{
    double first, second;

    printf("Enter 2 number.\n");
    scanf("%lf %lf", &first, &second);
    while (getchar() != '\n')
        continue;
    printf("The first number is %lf, the second number is %lf.\n", first, second);
    large_of(&first, &second);
    printf("Now the first number is %lf, the second number is %lf.\n", first, second);

    return 0;
}
