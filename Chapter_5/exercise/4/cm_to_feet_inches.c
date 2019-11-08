/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年9月25日
*/
/*
	cm_to_feet_inches.c -- enter your height in centimeters
	and display it in feet and inches.
*/
#include <stdio.h>
#define CM_TO_FEET 30.48
#define CM_TO_INCHES 2.54
int main(void)
{
	float centimeters;
	int feet;
	float remainder;
	float inches;
	const int MIN = 0;

	printf("Please enter your height in centimeters.\n");
	printf("Then it prints it in feet and inches.\n");
	printf("If your height is 0 or less, the program is over.\n");
	scanf("%f", &centimeters);
	while (centimeters > MIN)
	{
		feet = centimeters / CM_TO_FEET;
		remainder = centimeters - feet * CM_TO_FEET;
		inches = remainder / CM_TO_INCHES;
		printf("Your height in centimeters is : %f cm.\n", centimeters);
		printf("%f cm = %d feet, %f inches.\n", centimeters, feet, inches);
		scanf("%f", centimeters);
	}
	printf("The program is over.\n");

	return 0;
}
