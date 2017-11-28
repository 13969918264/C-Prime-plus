/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月28日
*/
/*	first.c	*/
#include <stdio.h>
void frist(char * arr)
{
	while ((*arr = getchar()) != ' ' && *arr != '\n' && *arr > 'A' && *arr < 'z')
		arr++;
	if (*arr == '\n')
		*arr = '\0'
	while (getchar() != '\n')
		continue;
}
