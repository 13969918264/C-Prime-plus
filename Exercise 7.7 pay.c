/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月23日
*/
/*  pay.c -- request work hour and print pay  */
#include <stdio.h>
#define WORK_HOURS 40
#define PAY_RATE 10.0
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
    float gross_pay;
    float tax;
    float net_pay;
    int work_hours;

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
