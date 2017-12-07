/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月30日
*/
/*	test_string_in.c	*/
#include <stdio.h>
#include <string.h>
#include "test_string_in.h"

int main(void)
{
	char str1[MAX], str2[MAX];
	int i;
	puts("Enter the first string:");
	for (i = 0; i < MAX &&(str1[i] = getchar()) != '\n' && str1[i] != '\0'; i++)
		continue;
	if (str1[i] == '\n')
		str1[i] = '\0';
	else
	{
		str1[MAX - 1] = '\0';
		while (getchar() != '\n')
			continue;
	}
	puts("Enter the second string.");
	for (i = 0; i < MAX &&(str2[i] = getchar()) != '\n' && str2[i] != '\0'; i++)
		continue;
	if (str2[i] == '\n')
		str2[i] = '\0';
	else
	{
		str2[MAX - 1] = '\0';
		while (getchar() != '\n')
			continue;
	}
	if (strlen(str1) < strlen(str2))
		puts("The size of the second string is larger than the first.");
	else if (string_in(str1, str2))
		puts("Congratulation.");
	else
		puts("Bad luck.");

	return 0;
}
