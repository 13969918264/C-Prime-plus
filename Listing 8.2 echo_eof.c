/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月26日
*/
/*  echo_eof.c -- repeats input to end of file  */
#include <stdio.h>
int main(void)
{
    int ch;

    while ((ch = getchar()) != EOF)
        putchar(ch);

    return 0;
}
