/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月04日
*/
/*	atoi.c	*/
#include <string.h>
#include <ctype.h>
int atoi(char * st)
{
	int flag = 0;
	int i = 0;

	while (i < strlen(st))
	{
		if (isdigit(*(st + i)))
			flag = 1;
		else
		{
			flag = 0;
			*(st + i) = *(st + i) - '0';
		}
		i++;
	}

	return flag;
}
