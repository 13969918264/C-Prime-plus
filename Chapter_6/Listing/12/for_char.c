/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月10日
*/
/*	for_char.c	*/
#include <stdio.h>
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		printf("The ASCII value for %c is %d.\n", ch, ch);

	return 0;
}
