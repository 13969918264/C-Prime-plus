/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年9月21日
*/
//	sizeof.c -- uses sizeof operator
//	uses C99 %z modifier -- try %u or %lu if you lack %zd
#include <stdio.h>
int main(void)
{
	int n = 9;
	size_t intsize;

	intsize = sizeof (int);
	printf("n = %d, n has %u bytes; all ints have %u bytes.\n", n, sizeof n, intsize);
	// in windows ,there is no %zd modifier

	return 0;
}
