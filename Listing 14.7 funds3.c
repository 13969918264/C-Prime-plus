/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2018年1月13日
*/
/*	funds3.c -- passing a strrcture	*/
#include <stdio.h>

#define FUNDLEN 50

struct funds {
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};

double sum(const struct funds moolah);			/*	argument is a structure	*/

int main(void)
{
	struct funds stan = {
		"Garlic-Melon bank",
		4032.27,
		"Luck's Savings and Loan",
		8543.94
	};

	printf("Stan has a total of $%.2f.\n", sum(stan));

	return 0;
}



/*	adds two double numbers	*/
double sum(const struct funds moolah)
{
	return (moolah.bankfund + moolah.savefund);
}
