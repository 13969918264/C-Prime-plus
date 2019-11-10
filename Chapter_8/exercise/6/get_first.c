/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月30日
*/
/*	get_first.c -- get the first nonwhitespace character	*/
#include <stdio.h>
#include <ctype.h>
char get_first(void);
int main(void)
{
	printf("Enter a line and report the first nonwhitespace character.\n");
	printf("the character is %c.\n", get_first());

	return 0;
}

char get_first(void)
{
	int ch;

	while (isspace(ch = getchar()))
		continue;

	return ch;
}
