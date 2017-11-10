/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月10日
*/
/*  large2.c -- find the largest number of an array and return it  */
int large(const double arr[], int n)
{
    int i, index;
    int max = 0;

    for (i = 1; i < n; i++)
    {
        if (max >= arr[i])
                ;
        else
        {
            max = arr[i];
            index = i;
        }
    }

    return index;
}
