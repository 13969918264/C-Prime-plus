/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年9月21日
*/
/*	rules.c	-- precedence test	*/
#include <stdio.h>
int main(void)
{
	int top, score;

	top = score = -(2 + 5) * 6 + (4 + 3) * (2 + 3);
	printf("top = %d, score = %d\n", top, score);

	return 0;
}
