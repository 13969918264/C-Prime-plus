/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月03日
*/
/*  large_of.c -- reset the argument in calling function as the large one   */
void large_of(double * u, double * v)
{
    *u = *u > *v ? *u : *v;
    *v = *u;
}
