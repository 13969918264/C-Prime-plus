/*
	error:
			fail to run or somewhere wrong i do not know.
			when i input a number no matter what i input,
			the program can not print it, it print 0.000000.
*/



/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年9月28日
*/
/*	cube.c -- read a number and cube it	*/
#include <stdio.h>

//double cube(double n);

int main(void)
{
	double number;
	//double cubed;

	printf("Enter a number, the program will cube it.\n");
	scanf("%f", &number);
	/*
		cubed = cube(number);
		printf("You enter %f, cubed %f.\n", number, cubed);
	*/
	printf("%f\n", number);

	return 0;
}


/*
	double cube(double n)
	{
		double sum;

		sum = n * n * n;
		return sum;
	}
*/
