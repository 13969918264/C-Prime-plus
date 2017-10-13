/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月11日
*/
/*	rows1.c -- uses nested loops	*/
#include <stdio.h>
#define ROWS 6
#define CHARS 10
int main(void)
{
	int row;
	char ch;

	for (row = 0; row < ROWS; row++)			/*	line 14	*/
	{
		for (ch = 'A'; ch < ('A' + CHARS); ch++)			/*	line 16	*/
			printf("%c", ch);
		printf("\n");
	}

	return 0;
}
