/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月14日
*/
/*  copy2.c -- copy a two_dimensional array to another by using the function in exercise 2  */
#include <stdio.h>
#include "copy2.h"

int main(void)
{
    double arr1[ROWS][COLS] = {{1.0, 2.3, 5.7, 9.9, 0.8}, {10.8, 8.7, 2.5, 4.9, 12.5}};
    double arr2[ROWS][COLS];
    int i;

    for (i = 0; i < ROWS; i++)
        copy_arr(arr2[i], arr1[i], COLS);
    printf("The first array:\n");
    print_array(arr1, ROWS);
    printf("The second array:\n");
    print_array(arr2, ROWS);
    printf("\n");

    return 0;
}
