/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月10日
*/
/*	for_none.c	*/
#include <stdio.h>
int main(void)
{
	int ans, n;

	ans = 2;
	for (n = 3; ans <= 25; )
		ans = ans * n;
	printf("n = %d; ans = %d.\n", n, ans);

	return 0;
}
