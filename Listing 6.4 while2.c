/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月9日
*/
/*	while2.c -- watch your semicolons	*/
#include <stdio.h>
int main(void)
{
	int n = 0;

	while (n++ < 3);			/*	line 11*/
		printf("n is %d\n", n);
	printf("That's all this program does.\n");

	return 0;
}
