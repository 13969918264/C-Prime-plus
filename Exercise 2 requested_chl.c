/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月02日
*/
/*  requested_ch.c -- print the character from input form column given to end given */
#include <stdio.h>
#include "requested_ch.h"

int main(void)
{
    char ch;
    int i, j;

    printf("Enter a character:\n");
    ch = getchar();
    printf("Enter the columns of begin and end.\n");
    scanf("%d %d", &i,&j);
    chline(ch, i, j);

    return 0;
}
