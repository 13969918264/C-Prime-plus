/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月01日
*/
/*	reversed.c	*/
#include <string.h>
void reversed(char * st)
{
	char temp;

	int i;
	int length = strlen(st);

	for (i = 0; i < (int)(length / 2); i++)
	{
		temp = *(st + i);
		*(st + i) = *(st + length - 1 - i);
		*(st + length - 1 - i) = temp;
	}
}
