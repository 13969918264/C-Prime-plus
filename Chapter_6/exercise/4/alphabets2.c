/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月13日
*/
/*	alphabets2.c -- the second way to print some letters.	*/
#include <stdio.h>
#define SIZE 27
int main(void)
{
	const int ROWS = 6;
	char letters[SIZE] = "ABCDEFGHILKLMNOPQRSTUVWXYZ";
	int row, column;
	int index = 0;

	for (row = 0; row < ROWS; row++)
	{
		for (column = 0; column <= row; column++)
			printf("%c", letters[index++]);
		printf("\n");
	}

	return 0;
}
