/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月15日
*/
/*  doubling.c -- doubling the values of the array  */
#define TIMES 2
#define M 5
void doubling(int arr[][M], int rows)
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < M; j++)
            arr[i][j] *= TIMES;
    }
}
