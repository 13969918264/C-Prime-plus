/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月17日
*/
/*	largest2.c	*/
double largest(int rows, int cols, double arr[rows][cols])
{

	int i, j;
	double max = 0;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j <cols; j++)
			max > arr[i][j] ? max : (max = arr[i][j]);
	}

	return max;
}
