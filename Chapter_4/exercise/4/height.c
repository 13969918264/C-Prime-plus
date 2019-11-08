/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年9月7日
*/
/*	height.c -- read your name and your height in centimeters,and display it in meters	*/
#include <stdio.h>
#define Rate 100
int main(void)
{
	float centimeters;
	float meters;
	char name[15];

	printf("Please enter your name and your height in centimeters in order:\n");
	scanf("%s %f", name, &centimeters);
	meters = centimeters / Rate;
	printf("%s, your are %.3f meter tall.\n", name, meters);

	return 0;
}
