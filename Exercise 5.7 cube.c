update:
/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月9日
*/
/*	cube.c -- cube the number by using a function you designed	*/
#include <stdio.h>

void cube(double n);
int main(void)
{
	double number;

	printf("Please enter a number.\n");			//	why i use %f is wrong?
	scanf("%lf", &number);
	cube(number);

	return 0;
}



void cube(double n)
{
	printf("You enter %lf, cubed %.lf.\n", n, n * n * n);
}



the follow is wrong , when i encounter a error, i do not know what happened with it
so i try it in some way, i knew it wrong.
i don't delete it.
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
