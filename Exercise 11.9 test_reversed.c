/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月30日
*/
/*	test_reversed.c	*/
#include <stdio.h>
#include "test_reversed.h"

int main(void)
{
	char str[MAX];
	int i;

	puts("Enter a line.");
	for (i = 0; i < MAX && (str[i] = getchar()) != '\n' && str[i] != '\0'; i++)
		continue;
	if (str[i] == '\n')
		str[i] = '\0';
	else
	{
		str[MAX - 1] = '\0';
		while (getchar() != '\n')
			continue;
	}
	puts("You entered:");
	puts(str);
	reversed(str);
	puts("Now, it is:");
	puts(str);

	return 0;
}
