/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月30日
*/
/*	guess2.c -- an efficient and right number-guesser	*/
#include <stdio.h>
#define MAX 100
#define MIN 0
#define RATE 2
int main(void)
{
	int max = MAX;
	int min = MIN;
	int middle = (max + min) / RATE;
	char ch;
	int guess = middle;

	printf("Pick an integer form 0 to 100, I will try to guess "
		   "it.\nRespond with high if the guess is grater than it.\n"
		   "Respond with low if the guess is less than it.\n"
		   "Respond correct if the guess is right.\n");
	printf("Is your number is %d.\n", guess);
	while ((ch = getchar()) != 'c')
	{
		if (ch == 'h')
		{
			printf("I guess it highly.\n");
			max = middle;
			guess = middle = (min + max) / RATE;
			printf("well, your number is %d.\n", guess);
		}
		else if (ch == 'l')
		{
			printf("I guess it lower.\n");
			min = middle;
			guess = middle = (min + max) / RATE;
			printf("well, your number is %d.\n", guess);
		}
		else
			printf("Please enter the choice given.\n");
		while (getchar() != '\n')
			continue;
	}
	printf("I know I could do it.\n");

	return 0;
}
