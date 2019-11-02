/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月14日
*/
/*  reverse_array.c -- a driver whick test an reverse function  */
#include <stdio.h>
#include "reverse_array.h"

int main(void)
{
    int i;
    double arr[N] = {1.6, 2.8, 3.7, 4.9, 0.9, 2.1, 9.9};

    for (i = 0; i < N; i++)
        printf("%lf\t", arr[i]);
    printf("\n");

    reverse(arr, N);

    printf("Now the contents of the array are:\n");
    for (i = 0; i < N; i++)
        printf("%lf\t", *(arr + i));
    printf("\n");

    return 0;
}
