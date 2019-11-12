/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月05日
*/
/*  power2.c -- the second way to calculate m to power n    */
double power(double m, int n)
{
    double result = 1;

    if (m != 0)
    {
        if (n != 0)
        {
            result *= m * power(m, n-1);
            if (n > 0)
                return result;
            else
                return 1 / result;
        }
        else
            return 1;
    }
    else if (n != 0)
        return 0;
    else
        return -1;
}
