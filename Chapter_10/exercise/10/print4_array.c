/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月15日
*/
/*  print4_array.c  */
#include <stdio.h>
void print4_array(int * arr1, int * arr2, int * arr3, int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("%d\t%d\t%d\n", arr1[i], *(arr2 + i), arr3[i]);
}
