/*
	姓名：赵子豪
	日期：2019年9月10日

*/
/*	glue.c -- use the ## operator	*/
#include <stdio.h>

#define XNAME(n) x ## n
#define PRINT_XN(n) printf("x" #n " = %d\n", x ## n);

int main(void)
{
	int XNAME(1) = 14;			//	become int x1 = 14;
	int XNAME(2) = 20;			//	become int x2 = 20;
	int x3 = 30;
	PRINT_XN(1);			//	became printf("x1 = %d\n", x1);
	PRINT_XN(2);			//	became printf("x2 = %d\n", x2);
	PRINT_XN(3);			//	became printf("x3 = %d\n", x3);

	return 0;
}
