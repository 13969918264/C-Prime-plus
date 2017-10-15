/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月15日
*/
/*  two_array.c -- using two array, the second is the sum of the first corresponding.   */
#include <stdio.h>
#define SIZE 8
int main(void)
{
    int index = 0 ;
    double first_array[SIZE], second_array[SIZE];

    scanf("%lf", &first_array[index]);
    second_array[index] = first_array[index];
    printf("Please enter 8 numbers at least \n");
    for ( index = 1; index < SIZE; index++)
    {
        scanf("%lf", &first_array[index]);
        second_array[index] = second_array[index-1] + first_array[index];
    }
    for (index = 0; index < SIZE; index++)
    {
        printf("%lf\t", first_array[index]);
        printf("%lf\n", second_array[index]);
    }
    return 0;
}
