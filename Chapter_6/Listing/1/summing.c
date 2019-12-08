/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年9月28日
*/
/*	summing.c -- sums integers entered inteactively	*/
#include <stdio.h>
int main(void)
{
	long num;
	long sum = 0L;			/*	initialize sum to zero	*/
	int status;

	printf("Please enter an integer to be summed ");
	printf("(q to quit): ");
	/*
		status = scanf("%ld", &num);
		while (status == 1)			//	== means "is equal to "
		{
			sum = sum + num;
			printf("Please enter next integer (q to quit): ");
			status = scanf("%ld", &num);
		}
	*/
	while ((status = scanf("%ld", &num)) == 1)
	{
		sum = sum + num;
		printf("Please enter next integer (q to quit): ");
	}
	printf("Those integers sum to %ld.\n", sum);

	return 0;
}
