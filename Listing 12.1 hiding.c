/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月11日
*/
/*	hiding.c	*/
#include <stdio.h>
int main(void)
{
	int x = 30;			//	original x

	printf("x is outer the block: %d at %p\n", x, &x);
	{
		int x = 77;			//	new x, hidings first x
		printf("x in inner the block; %d at %p\n", x, &x);
	}
	printf("x in outer block: %d at %p\n", x, &x);
	while (x++ < 33)			//	original x
	{
		int x = 100;			//	new x, hides first x
		x++;
		printf("x in while loop: %d at %p\n", x, &x);
	}
	printf("x in outer block: %d at %p\n", x, &x);

	return 0;
}
