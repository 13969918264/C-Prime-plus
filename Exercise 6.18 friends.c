/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月16日
*/
/*	friends.c -- display the friends growth	*/
#include <stdio.h>
#define MAX 150
#define TIME 2
int main(void)
{
	int friends_quantity = 5;
	int weeks = 0;

	while (friends_quantity <= 150)
	{
		weeks++;
		friends_quantity = (friends_quantity - weeks) * TIME;
		printf("At %dth week, he has %d friends.\n", weeks, friends_quantity);
	}

	return 0;
}
