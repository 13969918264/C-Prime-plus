/*
	Name: 赵子豪(zihao zhao)
	Date: 2017年8月12日
*/
/*	pizza.c	-- uses defined constants in a pizza context	*/
#include <stdio.h>
#define PI 3.14159
int main(void)
{
	float area, circum, radius;

	printf("What is the radius of your pizza?\n");
	scanf("%f", &radius);
	area = PI * radius * radius;
	circum = 2.0 * PI * radius;
	printf("Your basic pizza parameter are as follow:\n");
	printf("circumference = %1.2f, area = %1.2f\n", circum, area);

	return 0;
}
