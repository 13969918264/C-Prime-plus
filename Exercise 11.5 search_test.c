/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月28日
*/
/*	search_test.c	*/
#include <stdio.h>
#include "search_test.h"

int main(void)
{
	int i = 0;
	char ch;
	char str[MAX];
	puts("Enter a line as you like.");
	while (i < MAX)
	{
		str[i] = getchar();
		if (str[i] == '\n')
			break;
		i++;
	}
	if (i >= MAX)
	{
		while (getchar() != '\n')
			continue;
		i--;
	}
	str[i] = '\0';
	puts("And now which alphabet do you search for?");
	scanf("%c", &ch);
	if (search(str, ch))
		puts("Congratulation! You find it.");
	else
		puts("Oh, no, it is not in the statement.");

	return 0;
}
