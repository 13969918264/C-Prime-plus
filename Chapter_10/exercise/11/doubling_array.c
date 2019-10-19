/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月15日
*/
/*  doubling_array.c -- print an array and doubling it and display it   */
#include <stdio.h>
#include "doubling_array.h"

int main(void)
{
    int arr[N][M] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};

    print5_array(arr, N);
    doubling(arr, N);
    printf("Now the array:\n");
    print5_array(arr, N);
    printf("Bye\n");

    return 0;
}
