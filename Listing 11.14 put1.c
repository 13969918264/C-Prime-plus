/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月19日
*/
/*  put1.c -- prints a string without adding \n */
#include <stdio.h>
void put1(const char * string)          /*  string not altered  */
{
    while (*string != '\n')
        putchar(*string++);
}
