/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月23日
*/
/*  switch.c -- rewrite exercise 4 exclamation  */
#include <stdio.h>
int main(void)
{
    int number = 0;
    char ch;

    printf("Enter a line and # to end:\n");
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
            case '.' :
                        putchar('!');
                        number++;
                        continue;
            case '!' :
                        printf("!!");
                        number++;
                        continue;
            default :
                        putchar(ch);
        }
    }
    printf("\nYou change %d marks\n", number);

    return 0;
}
