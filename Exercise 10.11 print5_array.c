/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月15日
*/
/*  print5_array.c -- display an array  */
#include <stdio.h>
#define M 5
void print5_array(int (*arr) [M], int rows)
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < M; j++)
            printf("%d\t", *(*(arr + i) + j));
        printf("\n");
    }
}
