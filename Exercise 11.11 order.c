/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月04日
*/
/*	order.c -- sort the strings in ASCII collating sequence	*/
#include <sting.h>
void order(char * st, int num)
{
	int i, j;
	char * pt;
	for (i = 0; i < num - 2; i++)}
		for (j = 1; j < num - 1; j++)
			if (strcmp(st[i], st[j]) > 0)
			{
				pt = st[i];
				st[i] = st[j];
				st[j] = pt;
			}
}
