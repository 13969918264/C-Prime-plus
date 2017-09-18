/*
	Name: 赵子豪(Zihao Zhao)
	Date: 2017年9月18日
*/
/*	conversion.c -- gallons to liters and miles to kilometers	*/
#include <stdio.h>
#define gasolineRate 3.785			//	gallon / liters
#define lengthRate 1.609			//	miles / kilometers
int main(void)
{
	float miles;
	float gallons;
	float miles_per_gallon;
	float liters_per_100km;

	printf("Please enter the number of miles you have traveled.\n");
	scanf("%f", &miles);
	printf("Please enter the number of gallons you have consumed\n");
	scanf("%f", &gallons);
	miles_per_gallon = miles / gallons;
	printf("The miles_per_gallon is %.0f.\n", miles_per_gallon);
	liters_per_100km = gallons * gasolineRate / (miles * lengthRate / 100);
	printf("The liters_per_100km is %.0f.\n", liters_per_100km);

	return 0;
}
