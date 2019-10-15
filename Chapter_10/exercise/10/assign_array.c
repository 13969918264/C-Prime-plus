/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月15日
*/
/*  assign_array.c -- assign the sum of the corresponding elements of two array to the corresponding array of the third array   */
#include <stdio.h>
#include "assign_array.h"

int main(void)
{
    int arr1[N] = {2, 4, 5, 8};
    int arr2[N] = {1, 0, 4, 6};
    int arr3[N];

    assign_sum(arr1, arr2, arr3, N);
    printf("arr1\tarr2\tarr3\n");
    print4_array(arr1, arr2, arr3, N);
    printf("Bye!\n");

    return 0;
}
