/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月10日
*/
/*	for_cube.c -- using a for loop to make a table of cubes	*/
#include <stdio.h>
int main(void)
{
	int num;

	printf("    n   n cubed\n");
	for (num = 1; num <= 6; num++)			//	for (num = 1; num*num*num <= 216; num++)
		printf("%5d %5d\n", num, num*num*num);

	return 0;
}
