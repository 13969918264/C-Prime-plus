/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月12日
*/
//	power.c -- raises numbers to intege powers
#include <stdio.h>
double power(double n, int p);			// ANSI prototype
int main(void)
{
	double x, xpow;
	int exp;

	printf("Enter a nuber and the positive integer power");
	printf(" to which\nthe nuber will be raised, Enter q");
	printf(" to quit.\n");
	while (scanf("%lf %d", &x, &exp) == 2)
	{
		xpow = power(x,exp);			//	function call
		printf("%.3g to the power %d id %.5g\n", x, exp, xpow);
		printf("Enter next pair of number or q to quit.\n");
	}
	printf("Hope your enjoyed this power trip -- bye!\n");

	return 0;
}



double power(double n, int p)			//	function definition
{
	double pow = 1;
	int i;

	for (i = 1; i <= p; i++)
		pow *= n;

	return pow;			//	return the value of pow
}
