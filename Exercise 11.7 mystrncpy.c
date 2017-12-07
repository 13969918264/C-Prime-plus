/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月30日
*/
/*	mystrncpy.c	*/
#include <string.h>
char * mystrncpy(char * st1, const char * st2, int n)
{
	int i = 0;

	while (i < n)
	{
		st1[i] = st2[i];
		i++;
	}
	st1[i] = '\0';

	return st1;
}
