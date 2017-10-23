/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月23日
*/
/*  exclamation.c -- replace period to exclamation  */
#include <stdio.h>
int main(void)
{
    int number = 0;
    char ch;

    printf("Enter a line and # to end:\n");
    while ((ch = getchar()) != '#')
    {
        if (ch != '.' && ch != '!')
        {
            putchar(ch);
            continue;
        }
        else if (ch == '.')
        {
            putchar('!');
            number++;
            continue;
        }
        else
        {
            printf("!!");
            number++;
        }
    }
    printf("\nYou change %d marks\n", number);

    return 0;
}
