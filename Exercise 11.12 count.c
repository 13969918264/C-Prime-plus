/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月04日
*/
/*	count.c	*/
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;
	int words_num = 0;
	int upper_num = 0;
	int lower_num = 0;
	int punct_num = 0;
	int digit_num = 0;
	puts("Enter as you like, we will count it. EOF to quit");
	while ((ch = getchar()) != EOF)
	{
		if (word_num == 0 && isspace(ch))
			continue;
		else if (isupper(ch))
			upper_num++;
		else if (islower(ch))
			lower_num++;
		else if (isdigit(ch))
			digit_num++;
		else if (isspace(ch))
			words_num++;
		else if(ispunct(ch))
		{
			punct_num++;
			if (lower_num != 0 || upper_num != 0 || digit_num != 0 || words_num)
				word_num++;
		}
	}
	puts("You entered:");
	printf("The number of words is %d,
			The number of uppercase is %d,
			The number of lowercase is %d,
			The number of digit is %d,
			The number of punctuation is %d.",
			words_num, upper_num, lower_num, digit_num, punct_num);

	return 0;
}
