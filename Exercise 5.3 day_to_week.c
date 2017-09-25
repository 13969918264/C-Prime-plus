/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年9月25日
*/
/*	day_to_week.c -- enter the number of days and print it in weeks and days	*/
#include <stdio.h>
#define MIN 0
int main(void)
{
	int days;
	int weeks;
	int remainder;
	const int DAY_TO_WEEK = 7;

	printf("Please enter the number of days.\n");
	printf("Then it print it in weeks and days.\n");
	printf("If the number is 0 or less, the program will be over.\n");
	scanf("%d", &days);
	while (days > MIN)
	{
		weeks = days / DAY_TO_WEEK;
		remainder = days % DAY_TO_WEEK;
		printf("%d days are %d weeks, %d days\n", days, weeks, remainder);
		scanf("%d", &days);
	}
	printf("The program is over.\n");

	return 0;
}
