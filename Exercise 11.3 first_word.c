/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月27日
*/
/*	first_word.c -- read the first word of a line and discard the rest	*/
#include <stdio.h>
#include <string.h>
#include "first_word.h"
int main(void)
{
	char arr[MAX];
	int i = 0;
	puts("Enter a line but just read the first word");
	first(arr);

	while (i < strlen(arr))
	{
		putchar (arr[i]);
		i++;
	}
	puts("\n");

	return 0;
}
