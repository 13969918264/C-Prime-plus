/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月30日
*/
/*	test_mystrncpy.c	*/
#include <stdio.h>
#include "test_mystrncpy.h"

int main(void)
{
	char str1[MAX];
	char str2[MAX];
	int n;
	int i = 0;

	puts("Enter a line.");
	while (i < MAX - 1 && (str1[i] = getchar()) != '\n')
		i++;
	if (i == MAX - 1)			//	there is relation expression, use '==' not '='
	{
		str1[MAX - 1] = '\0';
		puts("What you entered excesses the maximum, we just input the first maximum values.");
		while (getchar() != '\n')
			continue;
	}
	else if (str1[i] == '\n')
		str1[i] = '\0';
	puts("You enter:");
	puts(str1);
	puts("What size do you want to copy?");
	scanf("%d", &n);
	while (getchar() != '\n')
		continue;
	if (n > MAX - 1)
	{
		n = MAX - 1;
		puts("The number excess the maximum. Just output the first maximum character.");
	}
	puts("The copy is:");
	puts(mystrncpy(str2, str1, n));

	return 0;
}
