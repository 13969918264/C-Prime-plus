/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月15日
*/
/*  infinite.c -- calculat the total of the series  */
#include <stdio.h>
int main(void)
{
    int flag;
    float divider, divided;            //  if the type is int, the sum will be set as 1.
    float sum;
    float last;

    printf("Enter a number as the limit of the series:");
    scanf("%f", &last);
    while (last)
    {
        for (divider = divided = 1, flag = 1, sum = 0; divider <= last; divider++)
        {
            sum += flag * divided / divider;
            flag = -flag;           //  omit the statement, the program will change.
        }
        printf("The series up to %f is %f.\n", last, sum);
        printf("Please enter the next limit: ");
        scanf("%f", &last);
    }
    printf("You enter %f. The program is over.\n", last);

    return 0;
}
