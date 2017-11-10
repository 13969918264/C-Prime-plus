/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月10日
*/
/*  large.c -- find the largest number of an array and return it  */
int large(const int arr[], int n)
{
    int i, max;

    max = *arr;
    for (i = 1; i < n; i++)
        max >= arr[i] ? max : (max = arr[i]);

    return max;
}
