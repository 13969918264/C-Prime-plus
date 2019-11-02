/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月14日
*/
/*  truncate_array.c -- copy a period of an array into another array    */
#include <stdio.h>
#include "truncate_array.h"

int main(void)
{
    int i;
    double first_array[N] = {1, 2, 3, 4, 5, 6, 7};
    double second_array[M];

    copy_ptr(second_array, &first_array[BEGIN], M);

    for (i = 0; i < M; i++)
        printf("%lf\t", *(second_array + i));
    printf("\n");
    return 0;
}
