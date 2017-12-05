/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月27日
*/
/*	fetch.c -- fetch the nest n character from input (including blanks, tools and newline)	*/
#include <stdio.h>
#include "fetch.h"

int main(void)
{
	char str[MAX];

	puts("Enter as you like, EOF or arrive the maximum to quit");
	fetch_n(str, MAX);
	puts("You enter (less the maximum)");
	puts(str);

	return 0;
}
