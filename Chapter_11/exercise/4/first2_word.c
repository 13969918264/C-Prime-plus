/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月28日
*/
/*	first2_word.c -- read the first word of a line and discard the rest	*/
#include <stdio.h>
#include <string.h>
#include "first2_word.h"
int main(void)
{
	char arr[MAX];
	int i = 0;

	puts("Enter a line but just read the first word and the first word has a fixed maximum size.");
	first2(arr, MAX);
	while (i < strlen(arr))
		putchar(arr[i++]);
	printf("\n");

	return 0;
}
