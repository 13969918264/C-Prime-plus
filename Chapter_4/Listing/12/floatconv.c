/*
	Name: 赵子豪(Zihao Zhao)
	Date: 2017年8月13日
*/
/*	floatconv.c -- mismatched floating-point conversation	*/
#include <stdio.h>
int main(void)
{
	float n1 = 3.0;
	double n2 = 3.0;
	long n3 = 2000000000;
	long n4 = 1234567890;

	printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);			// In windows there be some differences
	printf("%ld %ld\n", n3, n4);
	printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);

	return 0;
}
