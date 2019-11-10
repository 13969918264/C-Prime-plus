/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月12日
*/
/*	abcdef.c -- print abcdef	*/
#include <stdio.h>
int main(void)
{
	const int ROWS = 6;
	int column, row;
	char ch;

	for (row = 0; row < ROWS; row++)
	{
		for (column = 0, ch = 'F'; column <= row; column++)
			printf("%c", ch--);
	/*
		for (column = 0, ch = 'F'; column <= row; column++, ch--)
			printf("%c", ch);
	*/
		printf("\n");
	}

	return 0;
}
