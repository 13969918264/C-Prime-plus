/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月12日
*/
/*	alphabet.c -- read and print 26 alphabet.	*/
#include <stdio.h>
#define SIZE 26
int main(void)
{
	char alphabet[SIZE];
	int index;
	char ch;
	for (index = 0,ch = 'a';index < SIZE; )
		alphabet[index++] = ch++;
	for (index = 0; index < SIZE; )
		printf("%c\n", alphabet[index++]);
/*
	for (index = 0, ch = 'a'; index < SIZE; index++)
	//	alphabet[index] = ch;
		alphabet[index] = ch++;
	for (index = 0; index < SIZE; index++)
		printf("%c\n", alphabet[index]);
/*
	/*
	for (ch = 'a'; ch <= 'z'; ch++)
		printf("%c\n", ch);
	*/
	return 0;

}
