/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月16日
*/
/*  largest.c -- find the largest number of the array   */
#include "multi_operation_const.h"
double largest(double (* pt)[M], int n)
{
    int i, j;
    double max;

    for (i = 0, max = 0; i < n; i++)
    {
        for (j = 0; j < M; j++)
            max > *(*(pt + i) + j) ? max : (max = *(*(pt + i) + j));
    }

    return max;
}
