/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月02日
*/
/*  chline.c -- print requested character in given columns  */
#include <stdio.h>
void chline(char ch, int i, int j)
{
    int index = 0;
    for (index = 1; index < i; index++)
        putchar(' ');
    for ( ; i <= j; i++)
        putchar(ch);
}
