/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月19日
*/
/*  put2.c -- prints a string and counts charachters    */
#include <stdio.h>
int put2(const char * string)
{
    int count = 0;
    while (*string)         /*  common idiom    */
    {
        putchar(*string++);
        count++;
    }
    putchar('\n');          /*  newline not counted */

    return(count);
}
