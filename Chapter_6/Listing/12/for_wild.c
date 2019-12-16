/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月10日
*/
/*	for_wild.c	*/
#include <stdio.h>
int main(void)
{
	int x;
	int y = 55;

	for (x = 1; y <= 75; y = (++x *5) + 50)
		printf("%10d, %10d\n", x, y);

	return 0;
}
