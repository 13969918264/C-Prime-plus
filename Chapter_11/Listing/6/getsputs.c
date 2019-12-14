/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月17日
*/
/*  getsputs.c -- using gets() and puts()   */
#include <stdio.h>
#define STLEN 81
int main(void)
{
    char words[STLEN];

    puts("Enter a string, Please.");
    gets(words);            //  warning: this function is dangerous,
    //  because it doesn't know stop till encountering a newline characher.
    //  If the space you set aside for storing input is too small, it will cause the buffer overflow.
    printf("Your string twice:\n");
    printf("%s\n", words);
    puts(words);
    puts("Done.\n");

    return 0;
}
