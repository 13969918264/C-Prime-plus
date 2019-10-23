/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月17日
*/
/*	store2.c	*/
#include <stdio.h>
void store2(int rows, int cols, double arr[rows][cols])
{
	int i, j;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
			scanf("%lf", &arr[i][j]);
	}
}
