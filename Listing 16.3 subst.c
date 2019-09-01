/*
	姓名：赵子豪
	日期：2019年9月1日
*/
/*	subst.c -- constitute in string	*/
#include <stdio.h>

#define PSQR(x) printf("The square of " #x " is %d.\n", ((x) * (x)))

int main(void)
{
	int y = 5;

	PSQR(y);
	PSQR(2 + 4);

	return 0;
}
