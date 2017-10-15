/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月15日
*/
/*  infinite.c -- calculat the total of the series  */
#include <stdio.h>
int main(void)
{
    int flag;
    float index;            //  if the type is int, the sum will be set as 1.
    float sum;
    float last;

    printf("Enter a number as the limit of the series:");
    scanf("%f", &last);
    while (last)
    {
        for (index = 1, flag = 1, sum = 0; index <= last; index++)
        {
            sum += flag / index;
            flag = -flag;           //  omit the statement, the program will change.
        }
        printf("The series up to %f is %f.\n", last, sum);
        printf("Please enter the next limit: ");
        scanf("%f", &last);
    }
    printf("You enter %f. The program is over.\n", last);

    return 0;
}
