/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月10日
*/
/*  small.c -- find the smallest number of an array and return it  */
double small(const double arr[], int n)
{
    int i, min;

    min = *arr;
    for (i = 1; i < n; i++)
        min <= arr[i] ? min : (min = arr[i]);

    return min;
}
