/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月12日
*/
/*	loc_stat.c -- using a local variables	*/
#include <stdio.h>
void trystat(void);

int main(void)
{
	int count;

	for (count = 1; count <= 3; count++)
	{
		printf("Here comes iteration %d:\n", count);
		trystat();
	}

	return 0;
}



void trystat(void)
{
	int fade = 1;
	static stay = 1;

	printf("fade = %d and stay = %d\n", fade++, stay++);
}
