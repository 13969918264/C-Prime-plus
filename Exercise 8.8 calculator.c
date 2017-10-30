/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月30日
*/
/*  calculator.c -- give some choice that perform some operation    */
#include <stdio.h>
void choice_table(void);
int main(void)
{
    float number1, number2;
    double result;
    char ch;
    int choice;

    choice_table();
    while ((choice = getchar()) != 'q')
    {
        if (choice != 'a' &&
            choice != 's' &&
            choice != 'm' &&
            choice != 'd')
        {
            printf("You enter %c, please enter the choice given.\n", choice);
            continue;
        }
        printf("Enter first number: ");
        while (scanf("%f", &number1) != 1)
        {
            while ((ch = getchar()) != '\n')
                putchar(ch);
            printf(" is not a number.\n");
            printf("Please enter a number, such as "
                   "2.5, -1.78E8, or 3 : ");
        }
        printf("Enter second number: ");
        while (scanf("%f", &number2) != 1)
        {
            while ((ch = getchar()) != '\n')
                putchar(ch);
            printf(" is not a number.\n");
            printf("Please enter a number, such as "
                   "2.5, -1.78#8, or 3 : ");
        }
        switch (choice)         //  don't forget break
        {
            case 'a' :
                        result = number1 + number2;
                        printf("%f + %f = %f\n",
                                number1, number2, result);
                        break;
            case 's' :
                        result = number1 - number2;
                        printf("%f - %f = %f\n",
                                number1, number2, result);
                        break;
            case 'm' :
                        result = number1 * number2;
                        printf("%f * %f = %f\n",
                                number1, number2, result);
                        break;
            case 'd' :
                        while (number2 == 0)
                        {
                            printf("Enter a number other than 0.\n");
                            scanf("%f", &number2);
                        }
                        result = number1 / number2;
                        printf("%f / %f = %f\n",
                                number1, number2, result);
        }
        choice_table();
        while (getchar() != '\n')           //  skip some redunctive charactes.
            continue;
    }
    printf("Bye!\n");

    return 0;
}

void choice_table(void)
{
    printf("Enter the choice of your operation.\n"
           "a. add          b. subtract\n"
           "m. multiply     d. divide\n"
           "q. quit\n");
}
