/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月29日
*/
/*	search.c -- search a alphabet in string	*/
#include <stddef.h>
char * search(const char * st, int n)
{
	char * first = NULL;

	while (*st != '\0' && *st++ != n)
		continue;
	if (*st != '\0')
		first = --st;			//	discard the  'const'

	return first;
}
