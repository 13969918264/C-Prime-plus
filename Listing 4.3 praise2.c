/*
	Name: 赵子豪(zihao zhao)
	Date: 2017年8月12号
*/
/*	praise2.c	*/
//	try the %u or %lu specifications if your implementation
//	does not recognize the specifier
#include <stdio.h>
#include <string.h>			/*	provide strlen() prototype	*/
#define PRAISE "You are an extraordinary being."
int main(void)
{
	char name[40];

	printf("What's your name? ");
	scanf("%s", name);
	printf("Hello, %s, %s\n", name, PRAISE);
	printf("Your name of %d letters occupies %d memory cells.\n", strlen(name), sizeof(name));
	printf("The phrase of praise has %d letters ", strlen(name));
	printf("The phrase of praise has %d memory cells.\n", sizeof PRAISE);

	return 0;
}
