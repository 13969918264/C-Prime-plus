/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月30日
*/
/*	string_in.c	-- if the second parameter is a subset of the first parameter,
				return the address in the first paremters	*/
#include <string.h>
#include <stddef.h>
#include <stdio.h>
char * string_in(const char * st1, const char * st2)
{
	char * pt = NULL;
	int i = 0, j;
	int begin = i + 1;

	printf("%d\n", strlen(st1) - strlen(st2));
	for (j = 0, i; i <= strlen(st1) && j <= strlen(st2); )
	{
		if (*(st1 + i) == *(st2 + j))
		{
			if (j = 0)
			{
				pt = st1[i];
				begin = i + 1;			//	pointed the index after the first address compatible.
				//	if it doesnot fit finally, start the next cycle from here.
				//	compare its value with the first value of the first character
				//	of the second string.
			}
			i++;
			j++;
		}
		else
		{
			pt = NULL;
			j = 0;
			i = begin;			//	assign i as the new beginner.
			if (begin > (strlen(st1) - strlen(st2)))
				break;			//	when the rest of the string1 is less the string1, quit.
			else
				begin++;
		}
	}

	return pt;
}
