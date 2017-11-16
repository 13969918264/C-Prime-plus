/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月16日
*/
/*  rainfall_year.c -- print the rainfall of each year  */
#include <stdio.h>
#define MONTHS 12
void rainfall_year(const float rain[][MONTHS], int years)
{
    int year, month;
    float subtot, total;

    printf("YEAR    RAINFALL (INCHES)\n");
    for (year = 0, total = 0; year < years; year++)
    {   //  for each year, sum rainfall for each year
        for (month = 0, subtot = 0; month < MONTHS; month++)
            subtot += rain[year][month];
        printf("%5d     %15.1f\n", 2010 + year, subtot);
        total += subtot;            //  total for all years
    }
    printf("\nThe total rainfall is %f.\n"
           "The yearly average is %.1f inches\n\n",
           total, total / years);
}
