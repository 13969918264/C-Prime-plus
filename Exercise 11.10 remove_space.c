/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月01日
*/
/*	remove_space.c	*/
#include <ctype.h>
void remove_space(char * st)
{
	int i;

	for (i = 0; i < strlen(st) && isspace(*(st + i)); i++)
		for (i; i < strlen(st); i++)
			*(st + i) = *(st + i + 1);
}
