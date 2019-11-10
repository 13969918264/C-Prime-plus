/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月15日
*/
/*  power_array.c -- sets the elements of an array power of 2   */
#include <stdio.h>
#include <math.h>
#define SIZE 8
#define POWER 2
int main(void)
{
    int array[SIZE];
    int index;

    printf("Enter 8 integers at least.\n");
    for (index = 0; index < SIZE; )
        scanf("%d", &array[index++]);
/*
    for (index = 0; index < SIZE; index++)
        printf("You enter array[%d] = %d\t\t\tpowerof 2 is %e.\n", index, array[index], pow(array[index], POWER));
*/
    index = 0;
    do
    {
        printf("You enter array[%d] = %d\t\t\tpowerof 2 is %e.\n", index, array[index], pow(array[index], POWER));
        index++;
    } while (index < SIZE);

    return 0;
}
