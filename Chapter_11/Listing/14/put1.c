/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月19日
*/
/*  put1.c -- prints a string without adding \n */
#include <stdio.h>
void put1(const char * string)          /*  string not altered  */
{
    while (*string != '\0')
        putchar(*string++);         //  the higher precedence of ++ compared to * means that putchar(*string++) print the value
        //  pointed to by string but increments string itself, not the charachter to which it points.
}
