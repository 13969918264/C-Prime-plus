/*
	Name: 赵子豪
	Date: 2017年6月13号
*/



/*	ASCIIconvertChar.c -- an ASCII value converts to a char	*/
#include <stdio.h>
int main(void)
{
	/*
		if you want to convert an ASCII code value to a character correspondingly
		you need to control the format of output only
		and do not change the format of input
		and in scanf function you should not write an '\n'  newline escape sequence
	*/
	int value;

	printf("Please enter an ASCII code value.\n");
	scanf("%d", &value);
	printf("The character is %c.\n", value);

	return 0;
}
