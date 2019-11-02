/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月27日
*/
/*	fetch2_n.c	*/
#include <stdio.h>
#include <string.h>

void fetch2_n(char * st, int n)
{
/*	//	In this way, the program is process one line.
	char * first;

	fgets(st, n, stdin);
	if (first = strchr(st, '\n'))
		*first = '\0';
*/

	int i = 0;

	while (i < n && (*st = getchar()) != EOF)
	{
		st++;
		i++;
	}
	*st = '\0';

}
