/*
	Name: 赵子豪
	Date: 2017年6月14号
*/



/*	yearToSecond.c -- transform your age in year to in second	*/
#include <stdio.h>
int main(void)
{
	int ageYear;
	double ageSecond;

	printf("Enter your age in year: ");
	scanf("%d", &ageYear);
	ageSecond = ageYear * 3.156e7;
	printf("Your age in second is : %f", ageSecond);

	return 0;
}
