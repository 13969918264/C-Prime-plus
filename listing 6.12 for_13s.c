/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月10日
*/
/*	for_13s.c	*/
#include <stdio.h>
int main(void)
{
	int n;			//	count by 13s from 2

	for (n = 2; n < 60; n = n + 13)
		printf("%d\n", n);

	return 0;
}
