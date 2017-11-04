/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月4日
*/
/*  sort.c -- sort the number   */
#include <stdio.h>
#include "sort.h"

int main(void)
{
    double first, second, third;

    printf("Enter 3 numbers.\n");
    scanf("%lf %lf %lf", &first, &second, &third);
    printf("The firstr number is %lf.\n"
           "The second number is %lf.\n"
           "The third number is %lf.\n",
           first, second, third);
    swap(&first, &second, &third);
    printf("Now.\n"
           "The firstr number is %lf.\n"
           "The second number is %lf.\n"
           "The third number is %lf.\n",
           first, second, third);

    return 0;
}
