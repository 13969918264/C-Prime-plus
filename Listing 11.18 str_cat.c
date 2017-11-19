/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月19日
*/
/*  str_cat.c -- joined two strings */
#include <stdio.h>
#include <string.h>         /*  declares the strcat() function  */
#define SIZE 80
char * s_gets(char *, int n);
int main(void)
{
    char flower[SIZE];
    char addon[] = "s smell like  old shoes.";

    puts("What is your favorite flower?");
    if (s_gets(flower, SIZE))
    {
        strcat(flower, addon);
        puts(flower);
        puts(addon);
    }
    else
        puts("End of file encounterd!");
    puts("Bye!");

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
        else    //  must have word[i] == '\0'
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}