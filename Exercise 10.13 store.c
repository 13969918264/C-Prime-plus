/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月16日
*/
/*  store.c -- store the number in an two dimensional array */
#include <stdio.h>
#include "multi_operation_const.h"

void store(double arr[][M], int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < M; j++)
            scanf("%lf", &arr[i][j]);
    }
}
