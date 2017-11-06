/*
	Name: 赵子豪(ZiHao Zhao)
ऀ	Date: 2017年11月06日
*/
/*  day_mon2.c -- letting the compiler count element    */
#include <stdio.h>
int main(void)
{
    const int days[] = {31, 28, 31, 30, 31, 30,31, 31, 30, 31};
    int index;

    for (index = 0; index < sizeof (days) / sizeof(days[0]); index++)
        printf("Month %2d has %d days.\n", index + 1, days[index]);

    return 0;
}
