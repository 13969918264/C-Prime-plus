/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月24日
*/
/*  pay2.c -- first request the number of choice and accord to the number of choice to decide whether request work hours and print pay  */
#include <stdio.h>
#define WORK_HOURS 40
#define FIRST 300
#define NEXT 450
#define FIRST_RATE 0.15
#define NEXT_RATE 0.20
#define REST_RATE 0.25
#define OVER_HOURS_RATE 1.5
#define FIRST_TAX FIRST * FIRST_RATE
#define NEXT_TAX FIRST_TAX + (NEXT - FIRST) * NEXT_RATE
#define BASIC_PAY WORK_HOURS * PAY_RATE
int main(void)
{
    int choice;
    int work_hours;
    float gross_pay;
    float pay_rate;
    float net_pay;
    float tax;

    printf("Please enter the number of choice to decide the payrate.\n");
    printf("1 : $8.75/hr\t\t\t2 : $9.33/hr\n");
    printf("3 : $10.0/hr\t\t\t4 : $11.20/hr\n");
    printf("5 : quit\n");
    printf("Please enter your choice.\n");
    scanf("%d", &choice);

    printf("Enter your work hours weekly\n");
    while (scanf("%d", &work_hours))
    {
        if (work_hours < WORK_HOURS)
        {
            gross_pay = work_hours * PAY_RATE;
            if (gross_pay < FIRST)
                tax = gross_pay * FIRST_RATE;
            else
                tax = FIRST_TAX + (gross_pay - FIRST) * NEXT_RATE;
            net_pay = gross_pay - tax;
        }else
        {
            gross_pay = BASIC_PAY + (work_hours - WORK_HOURS) * OVER_HOURS_RATE * PAY_RATE;
            if (gross_pay < NEXT)
                tax = FIRST_TAX + (gross_pay - FIRST) * NEXT_RATE;
            else
                tax = NEXT_TAX + (gross_pay - NEXT) * REST_RATE;
            net_pay = gross_pay - tax;
        }
        printf("Your gross pay is %f, tax is %f, net pay is %f.\n", gross_pay, tax, net_pay);
    }

    return 0;
}
