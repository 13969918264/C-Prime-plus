/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年9月25日
*/
/*	addemup2.c -- read a number and print the sum of one up to the number	*/
#include <stdio.h>
int main(void)
{
	int number;
	int sum = 0;
	int count = 0;

	printf("Please enter a number\n");
	printf("If the nuber is 0 or less, the program is over.\n");
	scanf("%d", &number);
	while (number > 0)
	{
		while (count++ < number)
		{
			sum = sum + count;
		}
		printf("The number you enteer is %d.\n", number);
		printf("The sum from 0 to your number is %d.\n", sum);
		scanf("%d", &number);
	}
	printf("The program is over.\n");

	return 0;
}
