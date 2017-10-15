 /*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月14日
*/
/* difference.c -- read. two value of float-point and print the value of their difference divided by their product  */
#include <stdio.h>
int main(void)
{
    float number_one, number_two;
    double difference;

    printf("Enter two float number:\n");
    while (scanf("%f", &number_one) && scanf("%f", &number_two))
    {
        difference = number_one * number_two / (number_one - number_two);
        printf("You enter %f and %f.\n", number_one, number_two);
        printf("The value of their difference divided by their product is %lf.\n", difference);
        printf("Please enter two float-point number:\n");
    }
    printf("You enter one nonnumberic at least! The program is quit.\n");

    return 0;
}
