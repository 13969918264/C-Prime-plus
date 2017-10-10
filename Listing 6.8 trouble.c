/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月10日
*/
//	trouble.c -- misuse of =
//	will cause infinite loop
#include <stdio.h>
int main(void)
{
	long num;
	long sum = 0L;
	int status;

	printf("Please enter an integer to summed ");
	printf("(q to quit): ");
	status = scanf("%ld", &num);
	while (status = 1)			//	it is wrong. correct: replaced as while (status == 1)
	{
		sum = sum + num;
		printf("Please enter nest intege  (q to quit): ");
		status = scanf("%ld", &num);
	}

	printf("Those integers sum to %ld.\n", sum);

	return 0;
}
