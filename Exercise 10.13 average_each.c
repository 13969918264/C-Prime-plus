/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月16日
*/
/*  average_each.c -- the average value of each subarray  */
double average_each(double * arr, int m)
{
    int i;
    double sum;

    for (i = 0, sum = 0; i < m; i++)
        sum += *(arr + i);

    return sum / m;
}
