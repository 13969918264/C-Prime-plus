/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月14日
*/
/*  reverse.c -- reverse an array   */
void reverse(double * arr, int n)
{
    double temp;
    int i;

    for (i = 0; i < n-1-i; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}
