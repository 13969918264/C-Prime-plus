/*
    Name：赵子豪(ZiHao Zhao)
    Date: 2017年10月23日
*/
/*  odd_even.c -- read integer until 0 is entered.
    print the sums of even and odd respectively
    and the numbers of even and odd respectively    */
#include <stdio.h>
#define RATE 2
int main(void)
{
    int number;
    int odd_size = 0;
    int even_size = 0;
    int odd_sum = 0;
    int even_sum = 0;

    printf("Enter numbers and 0 to quit.\n");
    scanf("%d", &number);
    while (number)
    {
        if ((number % RATE) == 0)
        {
            even_size++;
            even_sum += number;
        }
        else
        {
            odd_size++;
            odd_sum += number;
        }
        printf("Enter numbers and 0 to quit.\n");
        scanf("%d", &number);
    }
    printf("You enter %d odd, sum is %d, average is %f\n", odd_size, odd_sum, (float)odd_sum / odd_size);
    printf("You enter %d even, sum is %d, average is %f\n", even_size, even_sum, (float)even_sum / even_size);

    return 0;
}
