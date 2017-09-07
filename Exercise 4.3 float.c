/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年9月7日
*/
/*	float.c -- read a float-point number and print it	*/
#include <stdio.h>
int main(void)
{
	float number;			//	There is 'float',when you use 'double', it will be wrong.

	printf("Please enter a float-point number:\n");
	scanf("%f", &number);
	printf("The input is %.1f or %.1e\n", number, number);
	printf("The input is %.3f or %.1E\n", number, number);

	return 0;
}
