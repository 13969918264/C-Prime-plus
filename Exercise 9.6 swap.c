/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月04日
*/
/*  swap.c -- sort the number given from low to high    */
void swap(double * x, double * y, double * z)
{
    double temp;

    if (*x > *y && *y > *z)         //  x > y > z
    {
        temp = *x;
        *x = *z;
        *z = temp;
    }
    else if (*x > *z && *z > *y)            //  x > z > y
    {
        temp = *x;
        *x = *y;
        *y = temp;
        temp = *z;
        *z = *y;
        *y = temp;
    }
    else if (*y > *x && *x > *z)            //  y > x > z
    {
        temp = *x;
        *x = *z;
        *z = temp;
        temp = *y;
        *y = *z;
        *z = temp;
    }
    else if (*z > *x && *x > *y)            //  z > x > y
    {
        temp = *x;
        *x = *y;
        *y = temp;
    }
    else if (*y > *z && *z > *x)
    {
        temp = *y;
        *y = *z;
        *z = temp;
    }
    else
        ;
}
