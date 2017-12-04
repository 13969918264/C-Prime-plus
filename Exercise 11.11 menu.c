/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月04日
*/
/*	ment.c	*/
#include <stdio.h>
char ment(void)
{
	char ch;
	puts("a: print the original strings.");
	puts("b: print the strings in ASCII collating sequence.");
	puts("c: print the strings in order of increasing length.");
	puts("d: print the strings in order of the length of the first word in th string.");
	puts("e: to quit");
	puts("Please enter your choice.");
	ch = getchar();
	while (getchar() != '\n')
		continue;

	return ch;
}
