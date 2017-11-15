/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月15日
*/
/*	VLA_copy.c --	use functions with VLA-based parameters to copy and print	*/
#include <stdio.h>
#include "VLA_copy.h"
int main(void)
{
	int rows = N, cols = M;
	double arr1[rows][cols] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 0}, {5, 4, 3, 2, 1}};
	double arr2[rows][cols];

	printf("The first array:\n");
	print3_array(arr1, N);
	printf("The second array:\n");
	print3_array(arr2, N);

	copy_VLA(N, M, arr1, arr2);

	printf("Now the first array:\n");
	print_VLA(N, M, arr1);
	printf("Now the second array:\n");
	print_VLA(N, M, arr2);

	printf("Bye!\n");

	return 0;
}
