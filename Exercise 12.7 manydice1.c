/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月13日
*/
/*	manydice1.c -- mutiple dice rolls	*/
/*	compile with diceroll1.c	*/
#include <stdio.h>
#include <stdlib.h>			/*	for library srand()	*/
#include <time.h>			/*	for time()	*/
#include "diceroll1.h"			/*	for roll_n_dice()	*/
/*	and for roll_count	*/
int main(void)
{
	int i;
	int dice, roll;
	int sides;
	int number_of_sets;

	srand((unsigned int) time(0));			/*	randomize seed	*/
	printf("Enter  the number of sides per die, 0 to stop.\n");
	while (scanf("%d", &sides) == 1 && sides > 0)
	{
		int status;

		printf("How many dices?\n");
		if (( status = scanf("%d", &dice)) != 1)
		{
			if (status == EOF)
				break;
			else
			{
				printf("You should have entered an integer.");
				printf(" Let's begin again.\n");
				while (getchar() != '\n')
					continue;			//	dispose of bad input
				printf("How many sides? Enter 0 to stop.\n");
				continue;			/*	new loop cycle	*/
			}
		}
		roll = roll_n_dice(dice, sides);
		printf("You have rolled a %d using %d %d_sides dice.\n", roll, dice, sides);
		printf("Enter the number of sets; enter q to stop: ");
		while (scanf("%d", &number_of_sets) == 1)
		{
			printf("How many sides and how many dice? %d %d\n", sides, dice);
			printf("Here are %d sets of  %d %d-sided throw.\n", number_of_sets, dice, sides);
			for (i = 0; i < number_of_sets; i++)
			{
				roll = roll_n_dice(dice, sides);
				printf(" %d", roll);
			}
			printf("\nHow many sets? Enter q to quit: ");
		}
		while (getchar() != '\n')
			continue;
		printf("How many sides? Enter 0 to stop.\n");
	}
	printf("The rollem() function was called %d times\n",
			roll_count);			/*	use extern variable	*/
	printf("GOOD FORTUNE TO YOU!\n");

	return 0;
}
