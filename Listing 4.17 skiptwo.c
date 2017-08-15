/*
	Name: 赵子豪(Zihao Zhao)
	Date: 2017年8月15日
*/
/*	skiptwo.c -- skips over first two integer of input	*/
#include <stdio.h>
int main(void)
{
	int n;

	printf("Please enter three integers:\n");
	scanf("%*d %*d %d", &n);
	printf("The last integer was %d\n", n);

	return 0;
}
