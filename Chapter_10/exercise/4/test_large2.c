/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月10日
*/
/*  test_large2.c -- test a function which return the large number of its parameteer */
#include <stdio.h>
#include "test_large2.h"

int main(void)
{
    double arr[N] = {3, 5, 1, 7, 9, 2, 7, 6, 10};

    printf("The index of the largest number of the array is %d\n", large(arr, N));

    return 0;
}
