/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月13日
*/
#include <stdio.h>
#define SIZE 27
int main(void)
{
	const int ROWS = 6;
//	const int SIZE = 27;
	int index, row, column;
//	array size must be initialized, use #define not const.
	char letters[SIZE] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (row = 0; row < ROWS; row++)
	{
		for (column = 0, index = 6; column <= row;  column++,index--)
			printf("%c", letters[index - 1]);
		printf("\n");
	}

	return 0;
}
