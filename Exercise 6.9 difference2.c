/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月15日
*/
/*  difference2.c -- using a function   */
#include <stdio.h>

double different(float m, float n);
int main(void)
{
    float number_one, number_two;

    printf("Enter two float number:\n");
    while (scanf("%f", &number_one) && scanf("%f", &number_two))
    {
        printf("You enter %f and %f.\n", number_one, number_two);
        printf("The value of their difference divided by their product is %lf.\n", different(number_one, number_two));
        printf("Please enter two float-point number:\n");
    }
    printf("You enter one nonnumberic at least! The program is quit.\n");

    return 0;
}



double different(float m , float n)
{
    double difference = m * n / (m - n);

    return difference;
}
