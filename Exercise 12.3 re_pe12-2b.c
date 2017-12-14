/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月14日
*/
/*	re_pe12-2b.c -- rewrite	*/
//	compile with re_pe12-2a.c
#include <stdio.h>
#include "re_pe12-2a.h"
int main(void)
{
	int mode;
	double * distance;
	double * fuel;

	printf("Enter 0 for metric mode, 1 for US mode: ");
	scanf("%d", &mode);
	while (mode >= 0)
	{
		mode = set_mode(mode);
		get_info(mode, distance, fuel);
		show_info(mode, distance, fuel);
		printf("Enter 0 for metric mode, 1 for US mode");
		printf(" (-1 to quit): ");
		scanf("%d", &mode);
	}
	printf("Done.\n");

	return 0;
}
