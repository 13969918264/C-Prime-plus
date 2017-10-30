/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月29日
*/
/*  average.c -- account the average number of letters per word(punctuations are counted) */
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int account_letters;
    int account_words;
    char ch;

    printf("Enter words and it will report the average number of letters per word when it stop.\n");
    for (account_letters = account_words = 0; (ch = getchar()) != EOF; )
    {
        if (isalpha(ch))
            account_letters++;
        else if (isspace(ch))
        {
            account_words++;
        }
    }
    printf("\nThe number of letters is %d, "
           "the number of word is %d, "
           "the average number of letters is %d.\n",
           account_letters, account_words, account_letters / account_words);

    return 0;
}
