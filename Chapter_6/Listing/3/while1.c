/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月9日
*/
/*	while1.c -- watch your braces	*/
/*	bad coding creates an infinite loop	*/
#include <stdio.h>
int main(void)
{
	int n = 0;

	//	indention for people not computer
	while (n < 3)
		printf("n is %d.\n", n);
		n++;
	printf("That's all this program does\n");

	return 0;
}
