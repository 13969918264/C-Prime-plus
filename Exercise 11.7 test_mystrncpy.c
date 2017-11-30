/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月30日
*/
/*	test_mystrncpy.c	*/
#include <stdio.h>
#include "test_mystrncpy.h"

int main(void)
{
	char str1[MAX], str2[MAX];
	int n;
	int i = 0;
	puts("Enter a line.");
	while (i < MAX - 1 && (str1[i] = getchar()) != '\0')
		i++;
	if (i = MAX - 1)
	{
		puts("What you entered excesses the maximum, we just input the first maximum values.");
		while (getchar() != '\n')
			continue;

	}
	str1[MAX - 1] = '\0';
	puts("What size do you want to copy?");
	scanf("%d", &n);
	while (getchar() != '\n')
		continue;
	if (n > MAX - 1)
	{
		n = MAX - 1;
		puts("The number excess the maximum. Just output the first maximum character.")
	}
	mystrncpy(str2, str1, n);
	puts("You enter:");
	puts(str1);
	puts("The copy is:");
	puts(str2);

	return 0;
}
