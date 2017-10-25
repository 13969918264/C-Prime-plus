/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月25日
*/
/*  tax.c -- read a taxable income and calculate the tax    */
#include <stdio.h>
#define SINGLE_FIRST 17850
#define HEAD_FIRST 23900
#define JOINT_FIRST 29750
#define SEPARATE_FIRST 14875
#define FIRST_RATE 0.15
#define REST_RATE 0.28
int main(void)
{
    int choice;
    float income;
    float first;
    float tax;

    printf("Please choose the tax category and enter the number.\n");
    printf("1 : single : 15%% of first 17850 plus 28%% of excess.\n");
    printf("2 : head of household : 15%% of first 23900 plus 28%% of excess.\n");
    printf("3 : married, joint : 15%% of first 29750 plus 28%% of excess.\n");
    printf("4 : Married, separate : 15%% of first 14875 plus 28%% of excess.\n");
    while (scanf("%d", &choice))
    {
        if (!(choice >= 1 && choice <= 4))
        {
            printf("Please enter the choice number given\n");
            continue;
        }
        switch (choice)
        {
            case 1 :
                    first = SINGLE_FIRST;
                    break;
            case 2 :
                    first = HEAD_FIRST;
                    break;
            case 3 :
                    first = JOINT_FIRST;
                    break;
            case 4 :
                    first = SEPARATE_FIRST;
                    break;
        }
        printf("Please enter the taxable income:\n");
        while (scanf("%f", &income))
        {
            if (income >= first)
                tax = first * FIRST_RATE + (income - first) * REST_RATE;
            else
                tax = income * FIRST_RATE;
            printf("Your tax is $%f.\n", tax);
            printf("Enter the next income.\n");
        }
        printf("enter the choice number.\n");
        getchar();          //  omit the statement the program will be stopped immediately
    }
    printf("The program is over.\n");

    return 0;
}
