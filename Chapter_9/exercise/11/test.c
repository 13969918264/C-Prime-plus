/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月06日
*/
/*	test.c -- text fibonacci function	*/
#include <stdio.h>
#include "test.h"

int main(void)
{
	int index;
	double result;

	printf("Enter a number which is a order in Fibonacci number.\n");
	scanf("%d", &index);
	result = fibonacci(index);
	printf("The number id %lf.\n", result);

	return 0;
}
