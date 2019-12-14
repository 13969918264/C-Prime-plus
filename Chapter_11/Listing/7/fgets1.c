/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月17日
*/
/*  fgets1.c -- using fgets() and fputs()   */
#include <stdio.h>
#define STLEN 14
int main(void)
{
    char words[STLEN];

    puts("Enter a string, please.");
    fgets(words, STLEN, stdin);         //  This function also see newline character
    //  as a character be stored utill the target is full.
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words, stdout);
    puts("Enter another string, please.");
    fgets(words, STLEN,stdin);
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words, stdout);
    puts("Done.");

    return 0;
}
