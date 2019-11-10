/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月29日
*/
/*  count.c -- count the number of characters until encountered EOF */
#include <stdio.h>
int main(void)
{
    int count = 0;

    while (getchar() != EOF)
        count++;
    printf("The number of characters is %d.\n", count);

    return 0;
}
