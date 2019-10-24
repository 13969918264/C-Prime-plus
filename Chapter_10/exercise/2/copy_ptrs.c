/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月09日
*/
/*  copy_ptrs.c -- the third way to copy an array with the pointer of the last element of the source array  */
void copy_ptrs(double target[], double source[], double * ptrs)
{
    double * ptr = source;
    int i;

    for (i = 0; ptr < ptrs; ptr++)
        target[i++] = *ptr;
}
