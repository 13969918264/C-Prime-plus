/*
	Name: 赵子豪(Zihao Zhao)
	Date: 2017年8月15日
*/
//	input.c -- when to use &
#include <stdio.h>
int main(void)
{
	int age;			//	variable
	float assets;			//	variable
	char pet[30];			//	string

	printf("Enter your age, assets, and favorite pet.\n");
	scanf("%d %f", &age, &assets);			//	use the & there
	scanf("%s", pet);			//	no & for char array
	printf("%d $%.2f %s\n", age, assets, pet);

	return 0;
}
