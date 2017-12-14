/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月14日
*/
/*	re_pe12-2a.c -- rewrite functions with no global variables used by re_pe12-2b.c	*/
#include <stdio.h>
/*
	static double distance;
	static double fuel;
	static int mode;
*/
int set_mode(int n)
{
	int mode;

	if (n > 1)
	{
		puts("Invalid mode specified.Mode 1(US) used.");
		mode = 1;
	}
	else
		mode = n;

	return mode;
}



void get_info(int mode, double * distance, double * fuel)
{

	if (mode == 0)
	{
		puts("Enter distance traveled in kilometers: ");
		scanf("%lf", distance);
		while (getchar() != '\n')
			continue;
		puts("Enter fuel consumed in liters: ");
		scanf("%lf", fuel);
		while (getchar() != '\n')
			continue;
	}
	else
	{
		puts("Enter distance traveled in miles: ");
		scanf("%lf", distance);
		while (getchar() != '\n')
			continue;
		puts("Enter fuel consumed in gallon: ");
		scanf("%lf", fuel);
		while (getchar() != '\n')
			continue;
	}
}



void show_info(int mode, double distance, double fuel)
{
	if (mode == 0)
		printf("Fuel consumption is %.2lf liters per 100 km.\n", fuel / (distance / 100));
	else
		printf("Fuel consumption is %.1lf miles per gallon.\n", distance / fuel);
}
