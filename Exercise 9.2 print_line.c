/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月03日
*/
/*  print_line.c -- print the character given times given and rows given  */
#include <stdio.h>
#include "print_line.h"

int main(void)
{
    int rows, columns;
    char ch;

    printf("Enter a character.\n");
    ch = getchar();
    printf("Enter the rows and columns the character will print\n");
    scanf("%d %d", &rows, &columns);
    row_column(ch, rows, columns);
    printf("Bye!\n");

    return 0;
}
