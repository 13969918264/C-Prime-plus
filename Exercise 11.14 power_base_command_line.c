/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月04日
*/
/*	power_base_command_line.c	*/
#include <stdio.h>
#include <math.h>
int main(int argc, char * argv[])
{
	printf("%lf power to %d is %lf.", *argv[1], *argv[2], pow(*argv[1], *argv[2]));

	return 0;
}
