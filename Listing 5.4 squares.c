/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年9月20日
*/
/*	squares.c -- produces a table of first 20 squares	*/
#include <stdio.h>
int main(void)
{
	int num = 1;

	while (num < 21)
	{
		printf("%4d %6d\n", num, num * num);
		num = num + 1;
	}

	return 0;
}
