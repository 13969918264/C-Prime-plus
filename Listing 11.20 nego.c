/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月19日
*/
/*  nogo.c -- will this work?   */
#include <stdio.h>
#define ANSWER "Grant"
#define SIZE 40
char * s_gets(char *, int);

int main(void)
{
    char try[SIZE];

    puts("Who is buried int Grant's tomb");
    s_gets(try, SIZE);
    while (try != ANSWER)           //  They are all pointers, so the comparasion doesn't check to see whether the value pointed to by them
    //  On the contrary, the comparasion check the location of the two varible, they are always diffenent.
    //  So, the loop never stops.
    {
        puts("No, that's wrong, Try again.");
        s_gets(try, SIZE);
    }
    puts("That's right!");

    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else    //  must have words[i] == '\0'
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}
