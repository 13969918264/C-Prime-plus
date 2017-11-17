/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月17日
*/
/*  fgets2.c -- using fgets() and fputs()   */
#include <stdio.h>
#define STLEN 10
int main(void)
{
    char words[STLEN];

    puts("Enter strings (empty line to quit):");
    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')          //  fgets() return a pointer to char
    //  which be passed to it as the first argument if it goes well, or return a void pointer.
    fputs(words, stdout);
    puts("Done.");

    return 0;
}
