/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月30日
*/
/*	mystrncpy.c	*/
#include <string.h>

char * mystrncpy(char * st1, const char * st2, int n)
{
	char * ret_val
	int i = 0;

	ret_val = st1;
	while (i < n && *st2++ != '\0')
	{
		i++;
		if (sizeof(st1) > n || i < (sizeof(str1) / sizeof(int) - 1))
		{
			*st1++ = *st2++;
			continue;
		}
		else
		{
			*st1 = '\0';
			break;
		}
	}
	*st1 = '\0';

	return ret_val;
}
