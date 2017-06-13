/*
	Name: 赵子豪
	Date: 2017年6月13号
*/



/*	showf_pt.c -- displays float value in two ways	*/
#include <stdio.h>
int main(void)
{
	float aboat = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;

	printf("%f can be written %e\n", aboat, aboat);
	// next lint requires C99 or later compliance
	printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
	printf("%f can be written %e\n", abet, abet);
	printf("%Lf can be written %Le\n", dip, dip);
	// there is a problem int the last statement.The display does not accord with the textbook.

	return 0;
}
