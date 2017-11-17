/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月17日
*/
/*	average2_each.c	*/
double average2_each(int cols, double * pt)
{
	int i;
	double sum;

	for (i = 0, sum = 0; i < cols; i++)
		sum += *(pt + i);

	return sum / cols;
}
