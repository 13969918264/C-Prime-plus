/*
	Name: 赵子豪
	Date: 2017年6月12号
*/



/*	print1.c -- displays some properties of printf()	*/
#include <stdio.h>
int main(void)
{
	int ten = 10;
	int two = 2;

	printf("Doing it right: ");
	printf("%d minus %d id %d\n", ten, 2, ten - two);
	printf("Doing it wrong: ");
	printf("%d minus %d is %d\n", ten );			//	forgot 2 arguments

	return 0;
}
