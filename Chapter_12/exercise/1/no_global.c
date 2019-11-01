/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月14日
*/
/*	no_global.c -- uses no external variable, rewrite 12.4	*/
#include <stdio.h>
//	int units = 0;			/*	an external variable	*/
int critic(int);
int main(void)
{
//	extern int units;			/*	an optional redeclaration	*/
	int units;

	printf("How many pounds to a firkin of butter!\n");
	scanf("%d", &units);
	while (units != 56)
		units = critic(units);
	printf("You must have looked it up!\n");

	return 0;
}



int critic(int n)
{
	/*	optional redeclaration omitted	*/
	printf("No luck, my friend. Try again.\n");
	scanf("%d", &n);

	return n;
}
