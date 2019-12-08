/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月19日
*/
//  put_put.c -- user_defined output functions
#include <stdio.h>
void put1(const char *);
int put2(const char *);

int main(void)
{
    put1("If i'd as much money");
    put1(" as I could spend,\n");
    printf("I count %d charachers.\n", put2("I never would cry old chairs to mend."));

    return 0;
}

void put1(const char * string)
{
    while (*string)         /*  same as *string != '\0' */
        putchar(*string++);
}

int put2(const char * string)
{
    int count = 0;

    while (*string)
    {
        putchar(*string++);
        count++;
    }
    putchar('\n');

    return(count);
}
