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
        putchar(*string++);         //  The type of the parameter of putchar() is int
        //  so the expression must produce a integer.
        //  As we know,  ++ has higher precedence than *, so perform ++ first.
        //  But ++ is postfixed here, that means the varible should evaluate first, and then increments.
        //  So the varible 'string' evaluate with operator '*' as the parameter.
        //  That's about what I think, and I don't if it is wrong.
        count++;
    }
    putchar('\n');          /*  newline not counted */

    return(count);
}
