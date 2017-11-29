/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月29日
*/
/*	is_within_test.c -- test the function is_within()	*/
#include <stdio.h>
#include "is_within_test.h"

int main(void)
{
	char * str[MAX];
	int i = 0;
	char ch;
	puts("Enter a line");
	while (i < MAX - 1 && (str[i++] = getchar())!= '\n')
		continue;
	if (i >= MAX - 1)
	{
		str[MAX - 1] = '\0';
		while (getchar() != '\n')
			continue;
	}
	puts("Enter a character as you like look for if it is in the string you entered");
	ch = getchar();
	while (getchar() != '\n')
		continue;
	if (is_within(str, ch))
		puts("Congratulation.")
	else
		puts("Bad luck.");

	return 0;
}
