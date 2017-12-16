/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月16日
*/
/*	called_count.c -- count the number of the function be called	*/
#include <stdio.h>

int print(void);

int main(void)
{
	printf("The function had been called %d times\n", print());
	printf("The another function called: %d times\n", print());
	printf("And This is %d times\n", print());

	return 0;
}



int print(void)
{
	static count = 0;			//	keep the variable persist until the program is over.

	printf("Hello, world.\n");
	count++;

	return count;
}
