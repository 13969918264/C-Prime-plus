/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月30日
*/
/*	string_in.c	-- if the second parameter is a subset of the first parameter,
				return the address in the first paremters	*/
#include <string.h>
char * string_in(const char * st1, const char * st2)
{
	return strstr(st1, st2);
}
