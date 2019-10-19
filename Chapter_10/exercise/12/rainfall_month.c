/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月16日
*/
/*  rainfall_month.c -- the rainfall of each month  */
#include <stdio.h>
#define MONTHS 12
void rainfall_month(const float rain[][MONTHS], int years)
{
    int year, month;
    float subtot;

    printf("MONTHLY AVERAGE:\n\n");
    printf(" Jan\tFeb\tMar\tApr\tMay\tJun\tJul\tAug\tSep\tOct\tNov\tDec\n");
    for (month = 0; month < MONTHS; month++)
    {   //          for each month , sum rainfall over years
        for (year = 0, subtot = 0; year < years; year++)
            subtot += rain[year][month];
        printf("%4.1f\t", subtot / years);
    }
    printf("\n");
}
