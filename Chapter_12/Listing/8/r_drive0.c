/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月13日
*/
/*	r_drive0.c test the rand0() function	*/
/*	compile with rand0.c	*/
#include <stdio.h>
extern int rand0(void);

int main(void)
{
	int count;

	for (count = 0; count < 5; count++)
		printf("%d\n", rand0());

	return 0;
}
