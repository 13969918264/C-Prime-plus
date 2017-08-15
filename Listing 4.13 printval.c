/*
	Name: 赵子豪(Zihao Zhao)
	Date: 2017年8月15日
*/
/*	printval.c -- finding printf()'s return value	*/
#include <stdio.h>
int main(void)
{
	int bph2o = 212;
	int rv;

	rv = printf("%d F is water's bliling point.\n", bph2o);
	printf("The printf() function printed %d characters.\n", rv);

	return 0;
}
