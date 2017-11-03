/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月03日
*/
/*  row_column.c -- print character given times given a line and print rows given   */
#include <stdio.h>
void row_column(char ch, int rows, int columns)
{
    int row, column;

    for (row = 0; row < rows; row++)
    {
        for (column = 0; column < columns; column++)
            putchar(ch);
        putchar('\n');
    }
}
