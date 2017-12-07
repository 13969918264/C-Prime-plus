/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月28日
*/
/*	first.c	*/
#include <stdio.h>
#include <ctype.h>
void first(char * arr)
{
	while ((*arr = getchar()) && isspace(*arr))
		continue;			//	skip the leading whitespace.
	while ((*++arr = getchar()) && !isspace(*arr) && !ispunct(*arr))
		continue;
	if (*arr != '\n')
		while (getchar() != '\n')
			continue;
	*arr = '\0';
}
