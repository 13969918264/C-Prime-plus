/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年9月28日
*/
/*
	temperature.c --
	read a Fahrenheit temperature and convert to Celsius and Kelvin by using function
*/
#include <stdio.h>

void Temperatures(double Fahrenheit);
int main(void)
{
	double Fahrenheit;
	int status;

	printf("Enter a Fahrenheit temperature.\n");
	printf("If you enter 'q' or other nonnumeric, it quit.\n");
	status = scanf("%f", &Fahrenheit);
	while (status == 1)
	{
		Temperatures(Fahrenheit);
		scanf("%f", &Fahrenheit);
	}
	printf("You enter a nonnumeric, the program is over.\n");

	return 0;
}



void Temperatures(double Fahrenheit)
{
	double Celsius, Kelvin;
	const double RATE = 5.0 / 9.0;
	const double MINUS = 32.0;
	const double PLUS = 273.16;
	Celsius = RATE * (Fahrenheit - MINUS);
	Kelvin = Celsius + PLUS;

	printf("Temperature in Fahrenheit is %9.2f.\n", Fahrenheit);
	printf("Temperature in Celsius is %9.2f.\n", Celsius);
	printf("Temperature in Kelvin is %9.2f.\n", Kelvin);
}
