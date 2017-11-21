/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月21日
*/
/*  hello.c -- converts command-line argument to number */
#include <stdio.h>
#include <ctype.h>

int main(int argc, char * argv[])
{
    int i, times;

    if (argc < 2 || (times = atoi(argv[1])) < 1)
        printf("Usage: %s postive-number\n", argv[0]);
    else
        for (i = 0; i < times; i++)
            puts("Hello, good looking!");

    return 0;
}
