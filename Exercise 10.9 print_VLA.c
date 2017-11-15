/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月15日
*/
/*	print_VLA.c	-- print a VLA-based array	*/
#include <stdio.h>
void print_VLA(int rows, int cols, double arr[rows][cols])
{
	int i, j;

	for (i = 0; i < cols; i++)
	{
		for (j = 0; j < cols; j++)
			printf("%lf\t", arr[i][j]);
		printf("\n");
	}
	printf("\n");
}
