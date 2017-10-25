/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月25日
*/
/* prime.c -- enter a positive integer and print all the primes under the number given	*/
#include <stdio.h>
#define MAX 10000
#define MIN 1
int main(void)
{
	int number;
	int index;
	int prime;
	int flag = 0;

	printf("Please enter a positive integerfrom 1 to 10000.\n");
	while (scanf("%d", &number))
	{
        if (number > MAX || number < MIN)
        {
            printf("The number you entered is too big or too small or too big\nPlease enter the right number\n");
            continue;
        }
        else if (number == MIN)
        {
            printf("You enter %d.\nIt's no sense.\n", number);
            printf("Enter the next number and q to quit.\n");
            continue;
        }
        printf("Primes are (except 1) :\n");
        for (prime = 2; prime <= number; prime++)
        {
            if (prime <= 3)
                printf("%d\n", prime);
            else
            {
                for (index = 2; index * index < prime; index++)
                {
                    if (prime % index != 0)
                    {
                        flag = 1;           //  目前为止不可除尽
                        continue;
                    }
                    else
                    {
                        flag = 0;
                        break;
                    }
                }
            if (flag == 1)
                printf("%d.\n", prime);
            }

        }
        printf("Enter the next number and q to quit.\n");
    }
    printf("The program is over.\n");

    return 0;
}
