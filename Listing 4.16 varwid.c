/*
	Name: 赵子豪(Zihao Zhao)
	Date: 2017年8月15日
*/
/*	varwid.c -- uses variable0-width optput field	*/
#include <stdio.h>
int main(void)
{
	unsigned width, precision;
	int number = 256;
	double weight = 242.5;

	printf("Enter a field width\n:");
	scanf("%d", &width);
	printf("The number is :%*d:\n", width, number);
	printf("Now enter a width and a precision:\n");
	scanf("%d %d", &width, &precision);
	printf("Weight = %*.*f\n", width, precision, weight);
	printf("Done!\n");

	return 0;
}
