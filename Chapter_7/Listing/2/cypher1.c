/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月18日
*/
//	cypher1.c -- alters input, preserving spaces
#include <stdio.h>
#define SPACE ' '			//	that's quote-space-quote
int main(void)
{
	char ch;

/*	ch = getchar();			//	read a character
	while (ch != '\n')			//	while not end of line
	{
		if (ch == SPACE)			//	leave the spaces
			putchar(ch);			//	characters unchanged
		else
			putchar(ch + 1);			//	change other characters
		ch = getchar();			//	get next character
	}
*/
	while ((ch = getchar())!= '\n')
	{
		if (ch == SPACE)			//	leave the spaces
			putchar(ch);			//	characters unchanged
		else
			putchar(ch + 1);			//	change other characters
	}
	putchar(ch);			//	print the newline

	return 0;
}
