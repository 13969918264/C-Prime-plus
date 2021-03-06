/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月20日
*/
/*  sort_str.c -- reads in strings and sorts them   */
#include <stdio.h>
#include <string.h>
#define SIZE 81         /*  string length limit, including \0   */
#define LIM 20          /*  maximum number of lines to be read  */
#define HALT ""         /*  null string to stop input   */
void stsrt(char * [], int);           /*  string-sort function    */
char * s_gets(char *, int);

int main(void)
{
    char input[LIM][SIZE];          /*  array to store input    */
    char * ptstr[LIM];           /*  array of pointer variables  */
    int ct = 0;         /*  input count */
    int k;          /*  output count    */

    printf("Input up to %d lines, and I will sort them.\n", LIM);
    printf("To stop, press the Enter key at a line's start.\n");
    while (ct < LIM && s_gets(input[ct], SIZE) != NULL && input[ct][0] != '\0')
    {
        ptstr[ct] = input[ct];          /*  set ptrs to strings */
        ct++;
    }
    stsrt(ptstr, ct);           /*  string sort */
    puts("\nHere's the sorted list:\n");
    for (k = 0; k < ct; k++)
        puts(ptstr[k]);         /*  sorted pointers */

    return 0;
}

/*  string-pointer-sorting function */
void stsrt(char * strings[], int num)
{
    char * temp;
    int top, seek;

    /*  for each cycle , get the minimum string except the minimum string has been found */
    for (top = 0; top < num - 1; top++)         // to ensure the first storage untraversed in this cycle store the minimum string
        for (seek = top + 1; seek < num; seek++)            //  finding the minimum string by comparing one to the other
            if (strcmp(strings[top], strings[seek]) > 0)
            {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
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
        else    //  must have words[i] == '\0'
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}
