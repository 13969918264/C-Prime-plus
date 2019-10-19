/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月16日
*/
/*  multi_operation.c -- do some operation by using some functions  */
#include <stdio.h>
#include "multi_operation_const.h"
#include "multi_operation_declare.h"

int main(void)
{
    int i;
    double arr[N][M];

    printf("Enter three sets of five double numbers\n");
    store(arr, N);
    for (i = 0; i < N; i++)
        printf("The average of the %d set is %lf.\n", i + 1, average_each(arr[i], M));
    printf("The average of all is %lf.\n", average_all(arr, N));
    printf("The largest of all is %lf.\n", largest(arr, N));

    return 0;
}
