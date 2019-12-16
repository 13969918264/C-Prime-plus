/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月10日
*/
//	truth.c -- what values are true?
#include <stdio.h>
int main(void)
{
	int n = 3;

	while (n)
		printf("%2d is true\n", n--);
	printf("%2d is false\n", n);

	n = -3;
	while (n)
		printf("%2d is true\n", n++);
	printf("%2d is false\n", n);

	return 0;
}
