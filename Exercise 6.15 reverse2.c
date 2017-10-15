/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月15日
*/
/*  reverse2.c -- print a line in reverse order */
#include <stdio.h>
#define SIZE 255
int main(void)
{
    char line[SIZE];
    int index = 0;

    while (index < SIZE)
    {
        printf("Please enter a line:\n");
        scanf("%c", &line[index]);
        while (line[index] != '\n')
            scanf("%c", &line[++index]);
        for ( ; index > 0; )
            printf("%c", line[--index]);
        printf("\n");
        printf("%d", index);
    }

    return 0;
}
