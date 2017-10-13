/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月11日
*/
/*	entry.c -- entry condition loop	*/
#include <stdio.h>
int main(void)
{
	const int secret_code = 13;
	int code_entered;

	printf("To enter the triskaidekaphobia therapy club,\n");
	printf("please enter the secret code number: ");
	scanf("%d", &code_entered);			//	it must be a integer.
	//	if you use other specialization not %d,
	//	it will not stop
	//	(because the number you enter is not corresponding to the secret_code)
	while (code_entered != secret_code)
	{
		printf("To enter the triskaidekaphobia therapy club,\n");
		printf("please enter the secret code number: ");
		scanf("%f", &code_entered);
	}
	printf("Congratulations! You are cured!\n");

	return 0;
}
