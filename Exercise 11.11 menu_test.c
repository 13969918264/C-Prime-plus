/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月04日
*/
/* 	menu_test.c	*/
/*	fail to run	*/
#include <stdio.h>
#include <string.h>
#include "define_menu_test.h"
#include "declare_menu_test.h"
int main(void)
{
	int length;
	int i, j;
	char str[ROWS][COLS];
	char (* p) [COLS];
	char ch;
	p = str;
	puts("Enter as you like up to 10, or EOF to quit.");
	for(i = 0; scanf("%s", *p) && i < ROWS; i++)
	{
		length = strlen(*pt);
		while (length < COLS - 1)
		{
			*(*p + length) = '\0';
			length++;
		}
		*(*pt + COLS - 1) = '\0';
	}
	j = (i < ROWS) ? i : ROWS;
	while ((ch = menu(void) != 'e')
	{
		switch (ch)
		{
			case 'a' : 
						for (i = 0; i < j; i++)
							puts(*p + i);
						break;
			case 'b' :
						order(str);
						for (i = 0; i < j; i++)
							puts(*p + i);
						break;
			case 'c' :
						ascend(str);
						for (i = 0; i < j; i++)
							puts(*p + i);
						break;
			case 'd' :
						ascend_firstword(str);
						for (i = 0; i < j; i++)
							puts(*p + i);
						break;
			default : 
						puts("please enter the right choice.");
		}
	}
	if (ch == 'e')
		puts("The program is over. bye!");
	
	return 0;
}
