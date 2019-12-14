/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月17日
*/
//	addresses.c -- addresses of strings
#define MSG "I am special"

#include <stdio.h>
int main(void)
{
	char ar[] = MSG;
	const char *pt = MSG;
	printf("address of \"I'm special\": %p \n", "I'm special");
	printf("              address ar: %p\n", ar);
	printf("              address pt: %p\n", pt);
	printf("         address of  MSG: %p\n", MSG);
	printf("address of \"I'm special\": %p \n", "I'm special");

	return 0;
}
