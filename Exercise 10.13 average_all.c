/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月16日
*/
/*  average_all.c -- the average of all values in the array */
#include "multi_operation_const.h"
double average_all(double arr[][M], int n)
{
    int i, j;
    double sum;

    for (i = 0, sum = 0; i < n; i++)
    {
        for (j = 0; j < M; j++)
            sum += *(*(arr + i) + j);
    }

    return sum / (M * n);
}
