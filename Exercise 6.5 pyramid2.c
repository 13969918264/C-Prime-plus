/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月13日
*/
/*	pyramid2.c -- the second way to print a alphabet pyramid	*/
#include <stdio.h>
#define SIZE 27
#define DELTA 1
int main(void)
{
	int rowsize, rownumber;
	int column, index;
	char upper;
	char letters[SIZE] = "ABCDEFGHILKLMNOPQRSTUVWXYZ";

	printf("Please enter a upper to print a alphabet pyramid: ");
	scanf("%c", &upper);
	rowsize = upper - 'A' + DELTA;
	for (rownumber = 0; rownumber < rowsize; rownumber++)
	{
		for (column = 0; column < rowsize - rownumber - DELTA; column++)
			printf(" ");
	//	printf("%d", column);
	//	printf("%d", rowsize - DELTA);
	/*	In the first cycle of outer for statement
		In the second inner for statement,
		the value of variable index was initialized, and start to test.
		when the first inner for statement ended,
		column increment to rowsize - rownumber - DELTA,
		when rownnumber = 0, rowsize - rownumber - DELTA = rowsize - DELTA,
		condition is not suitable.
		so don't execute the second inner for statement
		in the first cycle of the outer for statement.
	*/
		for (index = 0; column < rowsize -DELTA; column++)
			printf("%c", letters[index++]);
		for ( ; column < rowsize + rownumber; column++)
			printf("%c", letters[index--]);
		printf("\n");
	}

	return 0;
}
