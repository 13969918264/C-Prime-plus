/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月10日
*/
/*  large3.c -- find the largest number of an array and return it  */
double large(const double arr[], int n)
{
    int i, max;

    max = *arr;
    for (i = 1; i < n; i++)
        max >= arr[i] ? max : (max = arr[i]);

    return max;
}
