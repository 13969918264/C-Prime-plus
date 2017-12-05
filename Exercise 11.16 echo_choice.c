/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月05日
*/
/*	echo_choice.c	*/
#include <stdio.h>
#include "echo_choice.h"
int main(int argc, char * argv[])
{
	char str[ROWS][COLS];
	int i, j;
	puts("Enter as you like.");
	for (i = 0; i < ROWS; i++)
		if (s_gets(str[i], COLS))
			continue;
		else
			break;
	echo2(str, argv[1]);

	return 0;
}
