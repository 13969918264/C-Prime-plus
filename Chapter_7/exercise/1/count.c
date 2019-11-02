/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月22日
*/
/*  count.c -- read input and count the number of spaces, newlines and others respectively  */
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    int space_count, newline_count, other_count;

    space_count = newline_count = other_count = 0;
    printf("Enter a line and # to end input:\n");
    while ((ch = getchar()) != '#')
    {
        if (ch == '\n')         //  if the text statement change to be the second text statement, there is no newline.
            newline_count++;
        else if (isspace(ch))           //  isspace() not only test space but also tab and newline.-
            space_count++;
        else
            other_count++;
    }
    other_count++;          //  including the last #

    printf("You enter %d spaces, %d newlines, and %d other characters.\n",
            space_count, newline_count, other_count);

    return 0;
}
