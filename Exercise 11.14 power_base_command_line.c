/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月04日
*/
/*	power_base_command_line.c	*/
/*	sscanf() can read from a string. and i find it on the internet	*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[])
{
	int i = 0;
	int exp;
	double base;
	double multi = 1;

	if (argc < 3)
	{
		puts("There are no command-line arguments");
		exit(EXIT_FAILURE);
	}
	sscanf(argv[1], "%lf", &base);
	sscanf(argv[2], "%d", &exp);
	while (i < exp)
	{
		multi *= base;
		i++;
	}
	printf("%lf power to %d is %lf\n", base, exp, multi);

	return 0;
}
