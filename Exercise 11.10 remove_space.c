/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月01日
*/
/*	remove_space.c	*/
#include <ctype.h>
#include <string.h>
void remove_space(char * st)
{
	int i, j;

	for (i = 0; i < strlen(st); i++)
		while (isspace(*(st + i)))
		{
			j = i;
			for (j; j < strlen(st); j++)
				*(st + j) = *(st + j + 1);
		}
}
