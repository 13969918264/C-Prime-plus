/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年9月21日
*/
/*	addemup.c -- five kinds of statements	*/
#include <stdio.h>
int main(void)			/*	finds sum of first 20 integers	*/
{
	int count, sum;			/*	declaration statement	*/

	count = 0;			/*	assignment statement	*/
	sum = 0;			/*	ditto	*/
	while (count++ < 20)			/*	while	*/
	/*	
		当count = 19时，小于20，继续执行循环，
		且同时count加1，则此时 count为20，故此次循环时count的值已经为20，sum为1到20的和；
		当用++count时，先自增，即先为19增加到20，条件不满足，则不执行循环，sum为1到19的和
	*/
	{
		sum = sum + count;			/*	statement	*/
	}
	printf("sum = %d\n", sum);			/*	function statement	*/

	return 0;			/*	return statement	*/
}
