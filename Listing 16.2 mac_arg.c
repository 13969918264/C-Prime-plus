/*
	姓名：赵子豪
	日期：2019年8月1日
*/

/*	mac_arg.c -- macros with arguments	*/
#include <stdio.h>

#define SQUARE(X) 	X*X
#define PR(X)		printf("The result is %d.\n", X)

int main(void)
{
	int x = 5;
	int z;

	printf("x = %d.\n", x);
	z = SQUARE(x);
	PR(z);
	z = SQUARE(2);
	printf("Evaluating SQUARE(2): ");
	PR(z);
	printf("Evaluating SQUARE(x + 2): ");
	PR(SQUARE(x + 2));
	printf("Evaluating 100/SQUARE(2): ");
	PR(100/SQUARE(2));
	printf("x is %d.\n", x);
	printf("Evaluating SQUARE(++x): ");
	PR(SQUARE(++x));
	printf("After incrementing. x is %x.\n", x);

	return 0;
}
