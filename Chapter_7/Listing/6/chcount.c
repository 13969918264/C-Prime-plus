/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月19日
*/
//	chcount.c -- use the logical AND operator
#include <stdio.h>
#define PERIOD '.'
int main(void)
{
	char ch;
	int charcount = 0;

	while ((ch = getchar()) != PERIOD)
	{
		if (ch != '"' && ch != '\'')
			charcount++;
	}
	printf("There are %d non_quote characters.\n", charcount);

	return 0;
}
