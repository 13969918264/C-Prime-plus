/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年9月23日
*/
/*	minute_to_hour.c -- convert time in minutes to in hours and minutes	*/
#include <stdio.h>
#define MINUTE_TO_HOUR 60			//	CONST int MINUTE_TO_HOUR
int main(void)
{
	int minutes;
	int hours;

	printf("Please enter the time in minutes\n");
	printf("If you enter the time is 0 or less, the program will be over.\n");
	scanf("%d", &minutes);
	while (minutes > 0)
	{
		hours = minutes / MINUTE_TO_HOUR;
		minutes = minutes % MINUTE_TO_HOUR;
		printf("The time your enter is %d hours and %d minutes.\n",
				hours, minutes);
		printf("Go on if you like it !\n");
		scanf("%d", &minutes);
	}
	printf("The time you enter is %d. the program is over.\n", minutes);

	return 0;
}
