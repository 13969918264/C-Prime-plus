/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年9月25日
*/
#include <stdio.h>
int main(void)
{
	int number;
	int sum = 0;
	int count = 0;

	printf("Please enter a number, it should larger than 0, or quit.\n");
	scanf("%d", &number);
	while (number > 0)
	{
		while (count++ < number)
		{
			sum = sum + count * count;
		}
		printf("The number is %d.\n", number);
		printf("The sum is %d.\n", sum);
		printf("Go on as you like!\n");
		scanf("%d", &number);
		sum = 0;
		count = 0;
	}
	printf("The program is over.\n");

	return 0;
}
