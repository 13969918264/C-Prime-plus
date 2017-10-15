/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月15日
*/
/*  infinite.c -- calculat the total of the series  */
//  run successfully but i do not know whether it is right.
#include <stdio.h>
int main(void)
{
    int flag;
    int index;
    double sum;
    float last;

    printf("Enter a number as the limit of the series:");
    scanf("%f", &last);
    while (last)
    {
        for (index = 1.0, flag = 1.0, sum = 0; index <= last; index++)
        {
            sum += flag / index;
            flag = -flag;
        }
        printf("The series up to %f is %.10lf.\n", last, sum);
        printf("Please enter the next limit: ");
        scanf("%f", &last);
    }
    printf("You enter %f. The program is over.\n", last);

    return 0;
}
