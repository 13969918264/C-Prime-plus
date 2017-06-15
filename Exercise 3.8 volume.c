/*
	Name: 赵子豪
	Date: 2017年6月15号
*/



/*	volume.c -- pint to cup to ounce to ......	*/
#include <stdio.h>
int main(void)
{
	float cups;
	float pints;
	float ounces;
	float tablespoons;
	float teaspoons;

	printf("Ente volume int cups: ");
	scanf("%f", &cups);
	pints = cups / 2;
	ounces = cups * 8;
	tablespoons = ounces * 2;
	teaspoons = tablespoons *3;
	printf("The equivalent volume in pints is : %f\n", pints);
	printf("The equivalent volume in ounces is : %f\n", ounces);
	printf("The equivalent volume in tablespoons is : %f\n", tablespoons);
	printf("The equivalent volume int teaspoons is : %f\n", teaspoons);

	return 0;
}
