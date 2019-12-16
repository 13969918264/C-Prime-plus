/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月9日
*/
/*	t_and_f.c -- true and false values in c	*/
#include <stdio.h>
int main(void)
{
	int true_val, false_val;

	true_val = (10 > 2);			//	value of a true relationship
	false_val = (10 == 2);			//	value of a false relationship
	printf("true = %d; false = %d\n", true_val, false_val);

	return 0;
}
