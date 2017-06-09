/*
	Name: 赵子豪
	Date: 2017年6月7号
*/



/*	print4line.c	use 2 function user-defined	*/
#include <stdio.h>
void one_three(void);
void two(void);
int main(void)
{
	printf("starting now: \n");
	one_three();
	two();
	printf("done!\n");

	return 0;
}

one_three(void)
{
	printf("one\n");
}

void two(void)
{
	printf("two\n");
	printf("three\n");
}
