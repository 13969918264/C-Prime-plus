/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月10日
*/
//	sweetiel.c -- a counting loop
#include <stdio.h>
int main(void)
{
	const int NUMBER = 22;
	int count = 1;			//	initialization

	while (count <= NUMBER)
	{
		printf("Be my Valentine!\n");			//	action
		count++;			// 	update count
	}

	return 0;
}
