/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月9日
*/
//	when.c -- when a loop quits.
#include <stdio.h>
int main(void)
{
	int n = 5;

	while (n < 7)			//	line 11
	{
		printf("n = %d\n", n);
		n++;			//	line 14
		printf("Now n = %d\n",n);			//	line 15
	}
	printf("The loop has finished.\n");

	return 0;
}
