/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年9月6日
*/
/*	firstName.c -- ask your first name and print it in tht format given	*/
#include <stdio.h>
#include <string.h>
#define N 3
int main(void)
{
	char first[15];

	printf("Please enter your first name:\n");
	scanf("%s", first);
	printf("Your first name is \"%s\".\n", first);
	printf("Your first name is \"%20s\".\n", first);
	printf("Your first name is \"%-20s\".\n", first);
	/*	by using three spaces to make a field three characters wider than the name	*/
	printf("Your first name is *   %s*\n", first);	
	return 0;
}
