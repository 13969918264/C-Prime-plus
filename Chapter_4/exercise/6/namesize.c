/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年9月18日
*/
/*	namesize.c -- enter your name and get the number of name and print it in format given	*/
#include <stdio.h>
int main(void)
{
	int firstsize;
	int lastsize;
	char first[10];
	char last[10];

	printf("Please enter your firstname.\n");
	scanf("%s", first);
	printf("Please enter your last name.\n");
	scanf("%s", last);
	firstsize = strlen(first);
	lastsize = strlen(last);
	printf("%s %s\n", first, last);
	printf("%*d %*d\n", firstsize, firstsize, lastsize, lastsize);
	printf("%s %s\n", first, last);
	printf("%-*d %-*d\n", firstsize, firstsize, lastsize, lastsize);

	return 0;
}
