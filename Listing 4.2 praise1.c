/*
	Name: 赵子豪
	Date: 2017年6月18号
*/



/*	praise1.c -- uses an assortment of strings	*/
#include <stdio.h>
#define PRAISE "You are an extraordinary being."
int main(void)
{
	char name[40];

	printf("What's your name?\n");
	scanf("%s", name);
	printf("Hello, %s. %s\n", name, PRAISE);

	return 0;
}
