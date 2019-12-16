/*
	姓名：赵子豪
	日期：2019年9月15日
*/
/*	variadic.c -- variadic macros	*/
#include <stdio.h>
#include <math.h>

#define PR(X, ...) printf("Message " #X ": " __VA_ARGS__)

int main(void)
{
	double x = 48;
	double y;

	y = sqrt(x);
	PR(1, "x = %g\n", x);
	PR(2, "x = %.2f, y = %.4f\n", x, y);

	return 0;
}
