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
	while (i < MAX - 1 && (str[i] = getchar()) != '\n')
		i++;
	if (str[i] == '\n')
		str[i] = '\0';
	else
		while (getchar() != '\n')
			continue;
	puts("You entered:");
	puts(str);
	remove_space(str);
	puts("Now");
	puts(str);

	return 0;
}
