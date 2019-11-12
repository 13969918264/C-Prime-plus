/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月04日
*/
/*  numeric_location.c  -- print character and its numberic location in alphabet */
#include <stdio.h>
#include "numeric_location.h"
int main(void)
{
    int location;
    char ch;

    printf("Enter a line and EOF (depend on your os) to quit\n");
    while ((ch = getchar()) != EOF)
    {
        location = locate(ch);
        printf("%c's numeric location is %d.\n", ch, location);
    }
    printf("Bye!\n");

    return 0;
}
