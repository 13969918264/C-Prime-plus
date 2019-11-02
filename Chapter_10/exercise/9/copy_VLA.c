/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月15日
*/
/*	copy_VLA.c -- copy a VLA-based array	*/
void copy_VLA(int rows, int cols, double source[rows][cols], double target[rows][cols])
{
	int i, j;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
			target[i][j] = source[i][j];
		//	*(*(target + i) + j) = *(*(source + i) + j);
	}
}
