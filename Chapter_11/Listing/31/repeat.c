/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月21日
*/
/*  repeat.c -- main() with arguments   */
#include <stdio.h>
int main(int argc, char * argv[])
{
    int count;

    printf("The command line has %d arguments:\n", argc - 1);
    for (count = 1; count < argc; count++)
        printf("%d: %s\n", count, argv[count]);
    printf("\n");

    return 0;
}
