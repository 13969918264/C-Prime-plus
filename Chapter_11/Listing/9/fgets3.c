/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月17日
*/
/*  fgets3.c -- using fgets()   */
#include <stdio.h>
#define STLEN 10
int main(void)
{
    char words[STLEN];
    int i;

    puts("Enter strings (empty line to quit):");
    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
    {
        i = 0;
        while (words[i] != '\n' && words[i] != '\0')
            i++;
        if (words[i] == '\n')
            words[i] == '\0';
        else            //  must have words[i] == '\0'
            while (getchar() != '\n')           //  In order to avoid fgets() getting string from the point that it left.
                continue;
        puts(words);
    }
    puts("Done.");

    return 0;
}
