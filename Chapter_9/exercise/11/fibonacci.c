/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月06日
*/
/*	fibonacci.c -- using loops to calculate fibonacci number	*/
double fibonacci(int n)
{
	int i;
	double result1, result2, result3;

	result1 = result2 = 1;
	if (n == 1 || n == 2)
		return 1;
	else
	{
		for (i = 3; i <= n; i++)
		{
			result3 = result1 + result2;
			result1 = result2;
			result2 = result3;
		}
		return result3;
	}
}
