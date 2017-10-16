/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月16日
*/
/*	investment.c -- different rates and find the balance point	*/
#include <stdio.h>
#define RATE_ONE 0.05
#define RATE_TWO 0.1
int main(void)
{
	const int INVESTMENT = 100;
	double Daphne = INVESTMENT;
	double Deirdre = INVESTMENT;
	int  year = 0;

	while (Deirdre <= Daphne)
	{
		year++;
		Deirdre = Deirdre + Deirdre * RATE_ONE;
		Daphne = Daphne + INVESTMENT * RATE_TWO;
	}
	printf("At %dth year, Deirdre exceeds Daphne.\n", year);
	printf("Deirdre = %lf, Daphne = %lf.\n", Deirdre, Daphne);

	return 0;
}
