/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月27日
*/
/*  showchar1.c -- program with a BIG I/O problem   */
#include <stdio.h>
void display(char cr, int lines, int width);
int main(void)
{
    int ch;         /*  character to be printed */          //  type int to enable the EOF text
    int rows, cols;         /*  number of rows and columns  */
    printf("Please enter a character and two integers:\n");
    while ((ch = getchar()) != '\n')
    {
        scanf("%d %d", &rows, &cols);
        display(ch, rows, cols);            //  pass variable ch to function display in type char
        printf("Enter another character and two integers;\n");
        printf("Enter a newline to quit.\n");
        getchar();
    }
    printf("Bye!\n");

    return 0;
}

void display(char cr, int lines, int width)
{
    int row, col;

    for (row = 1; row <= lines; row++)
    {
        for (col = 1; col <= width; col++)
            putchar(cr);
        putchar('\n');          /*  end line and start a new one    */
    }
}
