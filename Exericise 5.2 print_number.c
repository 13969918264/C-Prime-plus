/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年9月25日
*/
/*	print_number.c -- read numbers and print the value up to a value larger by 10	*/
#include <stdio.h>
#define MAX 10
int main(void)
{
	int number;
	int i = 0;

	printf("Enter an integer, it prints the value up to the value larger by 10.\n");
	scanf("%d", &number);
	while (i < MAX)
	{
		printf("The number is %d.\n", number);
		number++;
		i++;
	}
	printf("The program is over.\n");

	return 0;
}
