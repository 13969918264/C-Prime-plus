/*
	Name: 赵子豪
	Date: 2017年6月14号
*/



/*	printDifferentForm.c -- print different form of one float-point number	*/
#include <stdio.h>
int main(void)
{
	float value;

	printf("Enter a floating-point value : ");
	scanf("%f", &value);
	printf("fixed-point notion : %.6d\n", value);
	printf("exponential notion : %.6e\n", value);
	printf("p notion : %.6a\n", value);

	return 0;
}
