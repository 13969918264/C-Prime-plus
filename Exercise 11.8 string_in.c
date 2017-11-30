/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月30日
*/
/*	string_in.c	-- if the second parameter is a subset of the first parameter,
				return the address in the first paremters	*/
#include <string.h>
char * string_in(const char * st1, const char * st2)
{
	char * pt = null;
	int i = j = 0;
	int flag = 0;

	for (i; i <= (strlen(st1) - strlen(st2)); i++)			//	st1
	{
		for (j; j <= strlen(st2); j++)			//	st2
		{
			if (*(st1 + i) == *(st2 + j))
			{
				if (j = 0)
					pt= st1 + i;
				flag = 1;
				break;
			}
			else
			{
				pt= null;
				flag = 0;
			}
		}
		if (flag)			//	st1 and st2 change currently and continually
			j++;
		else
			j= 0;
		}
	}
