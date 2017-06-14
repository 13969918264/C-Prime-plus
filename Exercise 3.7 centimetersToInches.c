/*
	Name: 赵子豪
	Date: 2017年6月14号
*/


/*	centimetersToInches.c -- convert centimeters to inches	*/
#include <stdio.h>
int main(void)
{
	int heightC;			// your height in centimeters
	double heightI;			// your height in inches

	printf("Enter your height in centimeters: ");
	scanf("%d", &heightC);
	heightI = heightC / 2.54;
	printf("Your height in inches is %.6f\n", heightI);

	return 0;
}
