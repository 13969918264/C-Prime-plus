/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月12日
*/
/*	6_R_8_a.c	*/
#include <stdio.h>
int main(void)
{
	char ch;

	scanf("%c", &ch);
	while (ch != 'g')
	{
		printf("%c", ch);
		scanf("%c", &ch);
	}

	return 0;
}
