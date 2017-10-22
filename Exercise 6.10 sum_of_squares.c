/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月15日
*/
/*  sum_of_squares.c -- read the lower limit and upper limit and diaplay the sum of squares from lower limit to upper limit */
#include <stdio.h>
int main(void)
{
    int upper_limit, lower_limit;
    long int sum;
    long int ans1;
    long int ans2;

    printf("Please enter two integer.\n");
    printf("if you enter nonnumberic or lower is equal or greater than upper limit. the program will be over.\n");
    printf("Lower limit first and then the upper limit: ");
    scanf("%d %d", &lower_limit, &upper_limit);
    while (lower_limit < upper_limit)
    {
        ans1=upper_limit*(upper_limit+1)*(2*upper_limit+1)/6;
        ans2=(lower_limit-1)*lower_limit*(2*lower_limit-1)/6;
        sum=ans1-ans2;
        
        printf("The sums of the squares from %ld to %ld is %ld.\n",
                lower_limit * lower_limit, upper_limit * upper_limit, sum);
        printf("Enter the next set of limits: ");
        scanf("%d %d", &lower_limit, &upper_limit);
    }
    printf("You enter %d and %d, the program is over!\n", lower_limit, upper_limit);

    return 0;
}
