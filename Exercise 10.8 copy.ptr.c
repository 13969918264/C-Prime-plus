/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月09日
*/
/*  copy_ptr.c -- copy an array by using an pointer as parameter and pointer incrementing to change location    */
void copy_ptr(double * target, double * source, int n)
{
    int i;

    for (i = 0; i < n; i++)
        *target++ = *source++;
}
