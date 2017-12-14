/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月14日
*/
/*	pe12-2a.c -- function used by pe12-2b.c	*/
#include <stdio.h>
static double distance;
static double fuel;
static int mode;

void set_mode(int n)
{
	if (n > 1)
	{
		puts("Invalid mode specified.Mode 1(US) used.");
		mode = 1;
	}
	else
		mode = n;
}



void get_info(void)
{
	if (mode == 0)
	{
		puts("Enter distance traveled in kilometers: ");
		scanf("%lf", &distance);
		while (getchar() != '\n')
			continue;
		puts("Enter fuel consumed in liters: ");
		scanf("%lf", &fuel);
		while (getchar() != '\n')
			continue;
	}
	else
	{
		puts("Enter distance traveled in miles: ");
		scanf("%lf", &distance);
		while (getchar() != '\n')
			continue;
		puts("Enter fuel consumed in gallon: ");
		scanf("%lf", &fuel);
		while (getchar() != '\n')
			continue;
	}
}



void show_info(void)
{
	if (mode == 0)
		printf("Fuel consumption is %.2lf liters per 100 km.\n", fuel / (distance / 100));
	else
		printf("Fuel consumption is %.1lf miles per gallon.\n", distance / fuel);
}
