/*
	Name: 赵子豪
	Date: 2017年6月13号
*/



/*	floaterr.c -- demonstrates round-off error	*/
#include <stdio.h>
int main(void)
{
	float a, b;

	b = 2.0e20 + 1.0;
	a = b - 2.0e20;
	printf("%f \n", a);

	return 0;
}
