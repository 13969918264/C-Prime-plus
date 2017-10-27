/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月27日
*/
//  file_eof.c -- open a file and display it
#include <stdio.h>
#include <stdlib.h>         //  for exir()
int main(void)
{
    int ch;
    FILE *fp;
    char fname[50];         //  to hold the file name

    printf("Enter the name of the file: ");
    scanf("%s", fname);
    fp = fopen(fname, "r");         //  open file for reading
    if (fp == NULL)         //  attempt failed
    {
        printf("Failed to open file. Bye.\n");
        exit(1);            //  quit program
    }
//  getc(fp) gets a character from the open file
    while ((ch = getchar()) != EOF)
        putchar(ch);
    fclose(fp);         //  close the file

    return 0;
}
