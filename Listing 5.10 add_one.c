/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年9月21日
*/
/*	add_one.c -- incrementing: prefix and postfix	*/
#include <stdio.h>
int main(void)
{
	int ultra = 0, super = 0;

	while (super < 5)
	{
		super++;			//	super = super + 1;
		++ultra;			//	ultra = super + 1;
		printf("super = %d, ultra = %d \n", super, ultra);
	}

	return 0;
}
