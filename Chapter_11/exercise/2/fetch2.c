/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月27日
*/
/*	fetch2.c -- stop in the end or when encountered whitespace	*/
#include <stdio.h>
#include <ctype.h>
#include "fetch2.h"

int main(void)
{
	char str[MAX];

	puts("Enter as you like, EOF or arrive the maximum to quit");
	fetch2_n(str, MAX);
	puts("You enter (less the maximum)");
	puts(str);

	return 0;
}
