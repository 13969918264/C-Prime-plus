/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月12日
*/
/*	moneytoken.c -- print moneytoken pattern	*/
#include <stdio.h>
int main(void)
{
	const int ROWS = 5;
	int column, row;

	for (row = 0; row < ROWS; row++)
	{
		for (column = 0; column <= row; column++)
			printf("$");
		printf("\n");
	}

	return 0;
}
