/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年9月28日
*/
/*	moduli.c -- modulus operation	*/
#include <stdio.h>
int main(void)
{
	int first;
	int second;
	int moduli;

	printf("This program computed moduli.\n");
	printf("If you enter 0 or less, the program is over.\n");
	printf("Enter an integer to serve as the second operand.\n");
	scanf("%d", &second);
	printf("Now, enter the first operand.\n");
	scanf("%d", &first);
	while (first > 0)
	{
		moduli = first % second;
		printf("%d modulus %d is %d.\n", first, second, moduli);
		//	printf("%d \% %d is %d.\n", first, second, moduli);			//	%无法输出
		scanf("%d", &first);
	}
	printf("You enter %d.\n", first);
	printf("The program is over.\n");

	return 0;
}
