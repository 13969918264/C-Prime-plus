/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月09日
*/
/*  copy_arr.c -- the first way to copy an array into another array by using the name of the source array as parameter  */
void copy_arr(double target[], double source[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        target[i] = source[i];
}
