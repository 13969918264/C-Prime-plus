/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月29日
*/
/*  r_and_w.c -- read and print characters. */
#include <stdio.h>
#define SIZE 10
int main(void)
{
    int i;
    char ch;

    for (i = 0; (ch = getchar()) != EOF; i++)
    {
        if (i ==0 || i % SIZE != 0)
            putchar(ch);
        else
        {
            putchar('\n');
            putchar(ch);
        }
    }
    printf("\nThe program is over.\n");

    return 0;
}
