/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月13日
*/
/*	pyramid.c -- read a alphabet and print a pyramid limit to it	*/
#include <stdio.h>
#define DELTA 1
#define TIMES 2
int main(void)
{
	int rowsize, rownumber;
	char ch, upper;
	int column;

	printf("Print a alphabet pyramid, please enter the upper: ");
	scanf("%c", &upper);
	rowsize = upper - 'A' + DELTA;
//	printf("%d\n", rowsize);

	for (rownumber = 0; rownumber < rowsize; rownumber++)
	{
		ch = 'A';
		for (column = 0; column < rowsize - rownumber - DELTA; column++)
			printf(" ");
	//	printf("\n column = %d \t", column);
	/*	In the first cycle of outer for statement
		In the second inner for statement,
		when start to test.
		when the first inner for statement ended,
		column increment to rowsize - rownumber - DELTA,
		when rownnumber = 0, rowsize - rownumber - DELTA = rowsize - DELTA,
		condition is not suitable.
		so don't execute the second inner for statement
		in the first cycle of the outer for statement.
	*/
		for (column; column < rowsize - DELTA; column++)
			printf("%c", ch++);
		for (column; column < rowsize + rownumber; column++)
			printf("%c", ch--);
		printf("\n");
	}

	return 0;
}
