/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月26日
*/
/*  echo.c -- repeats input */
#include <stdio.h>
int main(void)
{
    char ch;

    while ((ch = getchar()) != '#')
        putchar(ch);

    return 0;
}
