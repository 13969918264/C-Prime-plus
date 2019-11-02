/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月10日
*/
/*  test_difference.c -- print the difference between the largest and the smallest elements of an array double  */
#include <stdio.h>
#include "test_difference.h"

int main(void)
{
    double arr[N] = {3, 5, 1, 7, 9, 2, 7, 6, 10};

    printf("The difference between the largest and the smallest elements of the array is %lf\n", large(arr, N) - small(arr, N));

    return 0;
}
