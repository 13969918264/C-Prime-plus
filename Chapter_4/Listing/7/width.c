/*
	Name: 赵子豪(Zihao Zhao)
	Date: 2017年8月13日
*/
/*	width.c -- field widths	*/
#include <stdio.h>
#define PAGES 959			//	#define PAGES 123456789
int main(void)
{
	printf("*%d*\n", PAGES);
	printf("*%2d*\n", PAGES);
	printf("*%10d*\n", PAGES);
	printf("*%-10d*\n", PAGES);

	return 0;
}
