/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月04日
*/
/*  locate.c -- report the numberic location of a character */
#include <ctype.h>
int locate(char ch)
{
    if (isalpha(ch))
        return (ch - 'A') % 26 + 1;
    else
        return -1;
}
