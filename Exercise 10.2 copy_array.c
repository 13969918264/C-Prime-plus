/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月09日
*/
/*  copy_array.c -- using functions to copy an array into three other arrays    */
#include <stdio.h>
#include "copy_array.h"

int main(void)
{
    int i;
    double source[N] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[N];
    double target2[N];
    double target3[N];

    printf("Except for the first array, the other three arrays are uninitialized\n");
    printf("The four arrays(an array in a column) are: \n");

    for (i = 0; i < N; i++)
    {
        printf("%lf\t", source[i]);
        printf("%lf\t", target1[i]);
        printf("%lf\t", target2[i]);
        printf("%lf\t", target3[i]);
    }

    copy_arr(target1, source, N);
    copy_arr(target2, source, N);
    copy_arr(target1, source, source + N);

    printf("Bye\n");
}
