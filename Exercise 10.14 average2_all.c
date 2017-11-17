/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月17日
*/
/*	average2_all.c */
#include <stdio.h>
double average2_all(int rows, int cols, double arr[rows][cols])
{
	int i, j;
	double sum;

	for (i = 0, sum = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
			sum += arr[i][j];
		printf("\n");
	}

	return sum / (rows * cols);
}
