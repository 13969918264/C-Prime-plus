/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年9月23日
*/
/*	8.c -- Rewrite question 8 in Chapter 5, print a serial of characters	*/
#include <stdio.h>
#define H 'h'
int main(void)
{
	char n = 'a';

	while (n < H)
	{
		printf("%c", n);
		n++;
	}
	printf("\n");

	return 0;
}
