/*
	Name: 赵子豪
	Date: 2017年6月13号
*/



/*	escape.c -- uses escape characters	*/
#include <stdio.h>
int main(void)
{
	float salary;

	printf("\aEnter your desires monthly salary:");			/*	1	*/
	printf(" $_______\b\b\b\b\b\b\b");			/*	2	*/
	scanf("%f", &salary);
	/*	the '\n' excape sequence next line will operative so the display in the screen is not like the textbook	*/
	printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);			/*	3	*/
	/*	printf("\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);	*/ // this output is like the textbook
	printf("\rGee!\n");			/*	4	*/

	return 0;
}
