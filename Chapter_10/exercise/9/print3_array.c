/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月14日
*/
/*print3_array.c -- print an array   */
#include <stdio.h>
#define M 5
void print3_array(double arr[][M], int rows)
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < M; j++)
            printf("%lf\t", *(*(arr+i) + j));
        printf("\n");
    }
}
