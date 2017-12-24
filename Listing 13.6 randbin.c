/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月24日
*/
/*	randbin.c -- random access, binary i/o	*/
#include <stdio.h>
#include <stdlib.h>

#define ARSIZE 1000

int main(void)
{
	double numbers[ARSIZE];
	double value;
	const char * file = "numbers.txt";
	int i;
	long pos;
	FILE *iofile;

	//	create a set of double values
	for (i = 0; i < ARSIZE; i++)
		numbers[i] = 100.0 * i + 1.0 / (i + 1);
	// attempt to open file
	if ((iofile = fopen(file, "wb")) == NULL)
	{
		fprintf(stderr,"Can't open %s\n", file);
		exit(EXIT_FAILURE);
	}
	//	write array int binary format to file
	fwrite(numbers, sizeof(double), ARSIZE, iofile);
	fclose(iofile);
	if ((iofile = fopen(file, "rb")) == NULL)
	{
		fprintf(stderr, "Could not open %s for random access", file);
		exit(EXIT_FAILURE);
	}
	//	read selected items form file
	printf("Enter an index in the range 0 - %d\n", ARSIZE - 1);
	while (scanf("%ld", &i) == 1 && i >= 0 && i < ARSIZE)
	{
		pos = (long) i * sizeof(double);			//	calculate offset
		fseek(iofile, pos, SEEK_SET);			//	go there
		fread(&value, sizeof (double), 1, iofile);
		printf("The value there is %f.\n", value);
		printf("Next index (out of range to quit):\n");
	}
	//	finish up
	fclose(iofile);
	puts("Bye!");

	return 0;
}
