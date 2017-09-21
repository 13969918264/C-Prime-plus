/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年9月21日
*/
//	min_sec.c -- converts seconds to minutes and seconds
#include <stdio.h>
#define SEC_PER_MIN 60			//	seconds in a minute
int main(void)
{
	int sec, min, left;

	printf("Convert seconds to minutes and seconds!\n");
	printf("Enter the number of seconds (<=0 to quit): \n");
	scanf("%d", &sec);
	while (sec > 0)
	{
		min = sec / SEC_PER_MIN;			//	truncated number of minutes
		left = sec % SEC_PER_MIN;			//	number of second left ober
		printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
		printf("Enter next value (<=0 to quit):\n");
		scanf("%d",&sec);
	}
	printf("Done!\n");

	return 0;
}
