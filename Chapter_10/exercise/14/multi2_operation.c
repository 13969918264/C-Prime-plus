/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月17日
*/
/*	multi2_operation.c -- rewrite exercise 13 by using VLA as parameter	*/
#include <stdio.h>
#include "multi2_operation.h"
int main(void)
{
	int i, rows = 3, cols = 5;
	double vari_arr[rows][cols];

	printf("Enter three sets of five values of double\n");
	store2(rows, cols, vari_arr);
	for (i = 0; i < rows; i++)
		printf("The average of the %d line is %lf.\n", i + 1, average2_each(cols, vari_arr[i]));
	printf("The average of all is %lf.\n", average2_all(rows, cols, vari_arr));
	printf("The largest of all is %lf.\n", largest(rows, cols, vari_arr));

	return 0;
}
