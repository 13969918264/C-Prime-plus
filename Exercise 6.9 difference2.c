/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月15日
*/
/*  difference2.c -- using a function   */
#include <stdio.h>

void different(float m, float n);
int main(void)
{
    float number_one, number_two;

    printf("Enter two float number:\n");
    while (scanf("%f", &number_one) && scanf("%f", &number_two))
    {
        different(number_one, number_two);
    }
    printf("You enter one nonnumberic at least! The program is quit.\n");

    return 0;
}



void different(float m , float n)
{
        double difference = m * n / (m - n);
        printf("You enter %f and %f.\n", m, n);
        printf("The value of their difference divided by their product is %lf.\n", difference);
        printf("Please enter two float-point number:\n");
}
