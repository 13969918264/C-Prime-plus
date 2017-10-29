/*
    Name：赵子豪(ZiHao Zhao)
    Date: 2017年10月29日
*/
/*  account.c -- count the number of lowercase uppercase and other respectively */
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int account_upper;
    int account_lower;
    int account_other;
    char ch;

    printf("Enter words and the program will report the number of uppercase, lowercase "
           "and other respectively when it up to the end of file.\n");
    for (account_upper = account_lower = account_other = 0; ((ch = getchar()) != EOF); )
    {
        if (islower(ch))
            account_lower++;
        else if (isupper(ch))
            account_upper++;
        else
            account_other++;
    }
    printf("\nThe program is over.\n");
    printf("The number of uppercase, lowercase and other are %d, %d, %d.\n", account_upper, account_lower, account_other);

    return 0;
}
