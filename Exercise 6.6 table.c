/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月14日
*/
/*  table.c -- print a table of an integer and its square and its cube  */
#include <stdio.h>
int main(void)
{
    int upper_limit;
    int lower_limit;
    int square, cube;

    printf("Please enter an integer as uppper limit: ");
    scanf("%d", &upper_limit);
    printf("Now enter an integer as lower limit: ");
    scanf("%d", &lower_limit);
    printf("integer\t\t\tsquare\t\t\tcube\n");
    for (; lower_limit <= upper_limit; lower_limit++)
    {
        printf("%d\t\t\t%d\t\t\t%d\n", lower_limit, lower_limit * lower_limit, lower_limit * lower_limit * lower_limit);
    }
    printf("The table is completed!\n");

    return 0;
}
