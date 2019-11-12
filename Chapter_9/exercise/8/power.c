/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月05日
*/
/*  power.c */
double power(double m, int n)           //  calculate the m to power n
{
    int i;
    double result;

    if ( m != 0)
    {
        if (n != 0)
        {
            for (i = 0, result = 1; i < n; i++)
                result *= m;
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
