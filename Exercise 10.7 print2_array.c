/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月14日
*/
/*print2_array.c -- print an array   */
#include <stdio.h>
#define N 5
void print_array(double arr[][N], int ROWS)
{
    int i, j;

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < N; j++)
            printf("%lf\t", *(*(arr+i) + j));
        printf("\n");
    }
}
