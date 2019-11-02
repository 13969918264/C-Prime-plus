/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月04日
*/
/*	ascend.c -- sort the strings accord to the length of th strings	*/
#include <string.h>
void ascend(char * st, int num)
{
	int i, j;
	char * pt;
	for (i = 0; i < num - 2; i++)
		for (j = 0; j < num - 1; j++)
			if (strlen(st[i]) > st[j])
			{
				pt = st[i];
				st[i] = st[j];
				st[j] = pt;
			}
}
