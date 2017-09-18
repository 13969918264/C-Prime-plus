/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年9月18日
*/
/*	doubleandfloat.c -- the difference between double and float	*/
#include <stdio.h>
#include <float.h>
#define head 1.0
#define tail 3.0
int main(void)
{
	float varible1 = head / tail;
	double varible2 = head / tail;

	printf("%.4f, %.4f.\n", varible1, varible2);
	printf("%.12f, %.12f.\n", varible1, varible2);
	printf("%.16f, %.16f.\n", varible1, varible2);
	printf("%f %f", FLT_DIG, DBL_DIG);          //  The  limit in float.h

	return 0;
}
