/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年9月7日
*/
/*	download.c -- read download speed and file size to calculate the download time	*/
#include <stdio.h>
#define Rate 8
int main(void)
{
	float time;
	float size;
	float speed;

	printf("What's your download speed in megabits per second?\n");
	scanf("%f", &speed);
	printf("And what is the size of file you want in megabytes?\n");
	scanf("%f", &size);
	time = size * Rate / speed;
	/*
	printf("At %.2f megabits per second, a file of %.2f megabytes\n", speed, size);
	printf("downloads in %.2f seconds.\n", time);
	*/
	printf("At %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f seconds.\n",
			 speed, size, time);

	return 0;}
