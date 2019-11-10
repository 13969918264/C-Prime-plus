/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月13日
*/
/*	alphabets.c -- print alphabets in some order */
#include <stdio.h>
int main(void)
{
	const int ROWS = 6;
	int row, column;
	char ch = 'A';

	for (row = 0; row < ROWS; row++)
	{
		for (column = 0; column <= row; column++)
			printf("%c", ch++);
		printf("\n");
	}

	return 0;
}
