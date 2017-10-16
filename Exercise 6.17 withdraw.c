/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月16日
*/
/*	withdraw.c -- withdraw some money every year and find how many years withdraw your account.*/
#include <stdio.h>
#define WITHDRAW 100000
#define RATE 0.08
int main(void)
{
	int year = 0;
	double money = 1000000;

	while (money > 0)
	{
		year++;
		money = money * RATE + money - WITHDRAW;
	}
	printf("At %dth year, your account is empty.\n", year);
	printf("In this year, you withdraw %lf.\n", money + WITHDRAW);

	return 0;
}
