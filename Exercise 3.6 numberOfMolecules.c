/*
	Name: 赵子豪
	Date: 2017年6月14号
*/



/*	numberOfMolecules.c -- print the number of molecules in some amount	*/
/*
	while I enter 1, the screen displays -1.223764e+091
	I don't know what happen.
	It's overflow? or underflow?
*/
#include <stdio.h>
int main(void)
{
	double quarts;
	long double number;

	printf("Ebter the amout of water in quarts: ");
	scanf("%f", &quarts);
	number = 950 / 3.0e-23 * quarts;
	printf("The number of water nolecules in that amount is %.6e\n", number);

	return 0;
}
