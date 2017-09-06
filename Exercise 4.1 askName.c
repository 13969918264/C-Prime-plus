/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年9月6日
*/
/*	askname.c -- ask your name and print it	*/
#include <stdio.h>
int main(void)
{
	char last[15];
	char first[15];

	printf("Please enter your first name:\n");
	scanf("%s", first);
	printf("Please enter your last name:\n");
	scanf("%s", last);
	printf("Your name is %s %s in Chinese?\n", last, first);

	return 0;
}

