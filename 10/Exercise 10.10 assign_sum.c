/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月15日
*/
/*  assign_sum.c -- get the sum of each element of two array and assigned it to the third array */
void assign_sum(int source1[], int * source2, int * target, int n)
{
    int i;

    for (i = 0; i < n; i++)
        *(target + i) = source1[i] + *(source2 + i);
}
