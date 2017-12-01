/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月01日
*/
/*	remove_space_test.c	*/
#include <stdio.h>
#include "remove_space_test.h"

int main(void)
{
	char str[MAX];
	int i = 0;

	puts("Enter a line.");
	while (i < max)
	{
		if ((str[i] = getchar()) == '\n')
			if ((str[++i] = getchar()) == '\n')
			{
				str[i] = '\0';
				break;
			}
	}
	str[MAX - 1];
	puts("You entered:");
	puts(str);
	remove_space(str);
	puts("Now");
	puts(str);

	return 0;
}
