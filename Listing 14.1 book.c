/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2018年1月8日
*/
/*	book.c -- one-book inventory	*/
#include <stdio.h>
#include <string.h>

char * s_gets(char * st, int n);

#define MAXTITL 41			/*	maximum length of title	*/
#define MAXAUTL 31			/*	maximum length of author's name	*/

struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};			/*	end of structure template	*/

int main(void)
{
	struct book library;			/*	declare library as a book variable	*/

	printf("Please enter the book title.\n");
	s_gets(library.title, MAXTITL);			/*	access to the title portion	*/
	printf("Now enter the author.\n");
	s_gets(library.author, MAXAUTL);Y}
