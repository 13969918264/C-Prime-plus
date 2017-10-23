/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月23日
*/
/*  occurs.c -- reports the number of times that "ei" occurs    */
#include <stdio.h>
#define SIZE 100
int main(void)
{
    int times = 0;
    char ch;
    int index = 0;
    int count;
    char array[SIZE];

    printf("Enter a line and # to quie\n");
    while ((ch = getchar()) != '#')
        array[index++] = ch;
    for (count = 0; count < index; count++)
    {
        if (array[count] == 'e' && array[count + 1] == 'i')
            times++;
    }
    printf("'ei' occurs %d times\n", times);

    return 0;
}
