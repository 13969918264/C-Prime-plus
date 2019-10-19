/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月16日
*/
/*  rain2.c -- rewrite the listing 10.7 and assign the task to the function */
#include <stdio.h>
#include "rain2.h"
int main(void)
{   //  initializing rainfall data for 2010- 2014
    const float rain[YEARS][MONTHS] =
    {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 2.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
    };
    rainfall_year(rain, YEARS);
    rainfall_month(rain, YEARS);

    return 0;
}
